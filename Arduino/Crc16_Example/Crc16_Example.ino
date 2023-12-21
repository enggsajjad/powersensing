#define PLEN 16
#include "Crc16.h"
//Crc 16 library (XModem)
Crc16 crc; 

void setup()
{
    delay(200);
    Serial.begin(9600); 
    Serial.println("CRC-16 bit test program");
    Serial.println("=======================");
    /*
    Examples of crc-16 configurations
    Kermit: width=16 poly=0x1021 init=0x0000 refin=true  refout=true  xorout=0x0000 check=0x2189
    Modbus: width=16 poly=0x8005 init=0xffff refin=true  refout=true  xorout=0x0000 check=0x4b37
    XModem: width=16 poly=0x1021 init=0x0000 refin=false refout=false xorout=0x0000 check=0x31c3
    CCITT-False:width=16 poly=0x1021 init=0xffff refin=false refout=false xorout=0x0000 check=0x29b1
    see http://www.lammertbies.nl/comm/info/crc-calculation.html
  */
  //calculate crc incrementally
  //byte data[PLEN-2] = {0x5A, 0xA5, 0x4C, 0x00,   0x91, 0x00, 0xA0, 0x3B, 0x01, 0xA8, 0x02, 0x97, 0xBD, 0xBB, 0x04, 0x00, 0x9C, 0xA0, 0x65, 0x3E, 0xA2, 0x26, 0x45, 0x3F, 0x5C, 0xE7, 0x30, 0x3F, 0xE2, 0xD4, 0x5A, 0xC2, 0xE5, 0x9D, 0xA0, 0xC1, 0xEB, 0x23, 0xEE, 0xC2, 0x78, 0x77, 0x99, 0x41, 0xAB, 0xAA, 0xD1, 0xC1, 0xAB, 0x2A, 0x0A, 0xC2, 0x8D, 0xE1, 0x42, 0x42, 0x8F, 0x1D, 0xA8, 0xC1, 0x1E, 0x0C, 0x36, 0xC2, 0xE6, 0xE5, 0x5A, 0x3F, 0xC1, 0x94, 0x9E, 0x3E, 0xB8, 0xC0, 0x9E, 0xBE, 0xBE, 0xDF, 0x8D, 0xBE};
  //0x6C, 0x51,
  byte data[PLEN-2] = {0x5A, 0xA5, 0x0A, 0x00, 0x91, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08};
  // 0x5CEE

  Serial.println("Calculating crc in a single call");
  
  //XModem
  int value = crc.XModemCrc(data,0,PLEN-2);
  Serial.print("XModem crc = 0x");    
  Serial.println(value, HEX);
 
}

void loop()
{


  while(true);
}
