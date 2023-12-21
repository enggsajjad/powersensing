#include "ch_serial.h"
#include <stdio.h>
#if defined(CH_DEBUG)
#include <stdio.h>
#define CH_TRACE	printf
#else
#define CH_TRACE(...)
#endif


#define CHSYNC1         (0x5A)        /* CHAOHE message sync code 1 */
#define CHSYNC2         (0xA5)        /* CHAOHE message sync code 2 */
#define CH_HDR_SIZE     (0x06)        /* CHAOHE protocol header size */

/* common type conversion */
#define U1(p) (*((uint8_t *)(p)))
#define I1(p) (*((int8_t  *)(p)))
#define I2(p) (*((int16_t  *)(p)))
static uint16_t U2(uint8_t *p) {uint16_t u; memcpy(&u,p,2); return u;}
static uint32_t U4(uint8_t *p) {uint32_t u; memcpy(&u,p,4); return u;}
static float    R4(uint8_t *p) {float    r; memcpy(&r,p,4); return r;}

static void crc16_update(uint16_t *currect_crc, const uint8_t *src, uint32_t len)
{
    uint32_t crc = *currect_crc;
    uint32_t j;
    for (j=0; j < len; ++j)
    {
        uint32_t i;
        uint32_t byte = src[j];
        crc ^= byte << 8;
        for (i = 0; i < 8; ++i)
        {
            uint32_t temp = crc << 1;
            if (crc & 0x8000)
            {
                temp ^= 0x1021;
            }
            crc = temp;
        }
    } 
    *currect_crc = crc;
}

/* parse the payload of a frame and feed into data section */
static int parse_data(raw_t *raw)
{
    int ofs = 0, i = 0;
    uint8_t *p = &raw->buf[CH_HDR_SIZE];
    memset(raw->item_code, 0, sizeof(raw->item_code));
    raw->nitem_code = 0;
    
    //fprintf(stderr, "parse_data\n");

	while(ofs < raw->len)
	{
		switch(p[ofs])
		{
            
            case KItemIMUSOL:
                //fprintf(stderr, "KItemIMUSOL\n");
				raw->nimu = 1;
                raw->item_code[raw->nitem_code++] = KItemIMUSOL;
                raw->imu[0].id = U1(p+ofs+1);
                raw->imu[0].voltage = U4(p+ofs+2);
                raw->imu[0].ampere = U4(p+ofs+6);
                

                ofs += 10;
                break;
				
            default:
				ofs++;
                break;
		}
    }
    
    return 1;
}

static int decode_ch(raw_t *raw)
{
    uint16_t crc = 0;   
    
    //fprintf(stderr, "decode_ch\n");


    /* checksum */
    crc16_update(&crc, raw->buf, 4);
    crc16_update(&crc, raw->buf+6, raw->len);
    if (crc != U2(raw->buf+4))
    {
        CH_TRACE("ch checksum error: frame:0x%X calcuate:0x%X, len:%d\n", U2(raw->buf+4), crc, raw->len);
        return -1;
    }

    
    return parse_data(raw);
}

/* sync code */
static int sync_ch(uint8_t *buf, uint8_t data)
{
    buf[0] = buf[1];
    buf[1] = data;
    return buf[0] == CHSYNC1 && buf[1] == CHSYNC2;
}

int ch_serial_input(raw_t *raw, uint8_t data)
{
    /* synchronize frame */
    if (raw->nbyte == 0)
    {
        if (!sync_ch(raw->buf, data)) return 0;
        raw->nbyte = 2;
        return 0;
    }

    raw->buf[raw->nbyte++] = data;
    
    if (raw->nbyte == CH_HDR_SIZE)
    {
        if ((raw->len = U2(raw->buf+2)) > (MAXRAWLEN - CH_HDR_SIZE))
        {
            CH_TRACE("ch length error: len=%d\n",raw->len);
            raw->nbyte = 0;
            return -1;
        }
    }
    
    if (raw->nbyte < (raw->len + CH_HDR_SIZE)) 
    {
        return 0;
    }
    
    raw->nbyte = 0;
    
    return decode_ch(raw);
}
