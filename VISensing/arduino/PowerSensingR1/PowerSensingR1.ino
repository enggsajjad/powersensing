#include "esp_adc_cal.h"
#include <driver/adc.h>
#define PLEN 16
#include "Crc16.h"
//Crc 16 library (XModem)
Crc16 crc; 

//frames with header of 6 bytes and 10 data bytes
// H1, H2, LenMSB, LenMSB, CRC16.Xmodem.lsb, CRC16.Xmodem.msb, Type, PcktID, Vlsb, V2, V3, VMsb, Ilsb, I2, I3, IMsb
//byte frames[PLEN-2] = {H1, H2, LenMSB, LenMSB, Type, PcktID, Vlsb, V2, V3, VMsb, Ilsb, I2, I3, IMsb};
//byte frames[PLEN-2] = {0x5A, 0xA5, 0x0A, 0x00, 0x91, 0x03, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08};
// 0x5CEE
byte frames[PLEN-2] = {0x5A, 0xA5, 0x0A, 0x00, 0x91, 0x03, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08};

uint32_t readADC_Cal(int ADC_Raw)
{
  esp_adc_cal_characteristics_t adc_chars;
  
  esp_adc_cal_characterize(ADC_UNIT_1, ADC_ATTEN_DB_11, ADC_WIDTH_BIT_12, 1100, &adc_chars);
  return(esp_adc_cal_raw_to_voltage(ADC_Raw, &adc_chars));
}
void sendPacket()
{
  int value = crc.XModemCrc(frames,0,PLEN-2);


  //Serial.print("XModem crc = 0x");    
  //Serial.println(value, HEX);
  for (int i = 0; i < 4; i++)
    Serial.write(frames[i]);

  Serial.write(value & 0xff);
  Serial.write((value>>8) & 0xff);
  
  for (int i = 4; i < (PLEN-2); i++)
    Serial.write(frames[i]);
  
}

void setup() {
  delay(100);
  
  digitalWrite(RGB_BUILTIN, HIGH);   // Turn the RGB LED white
  delay(1000);
  digitalWrite(RGB_BUILTIN, LOW);    // Turn the RGB LED off
  delay(1000);
  neopixelWrite(RGB_BUILTIN,RGB_BRIGHTNESS,0,0);
  
  // initialize serial communication at 115200 bits per second:
  Serial.begin(115200);
  //ADC1(2) Voltage 0-48 Scaled 0-2.5 using a factor of 1.5/28.5
  //ADC1(1) Current 0-30A, Voltage 0-4.5  Scaled 0-2.5 using a factor of 2/3.6
  adc1_config_width(ADC_WIDTH_BIT_12);
  adc1_config_channel_atten(ADC1_CHANNEL_2,ADC_ATTEN_DB_11);
  //set the resolution to 12 bits (0-4096)
  analogReadResolution(12);
  
}

void loop() {
  // read the analog / millivolts value for pin 2: VOLTAGE
  int adc2 = analogRead(2);
  float mv2 = analogReadMilliVolts(2);
  int mv48 = mv2 * 28.5/1.5; // Divider 27 and 1.5 1.5=Parallel 2&6
  int mv48_b = (adc2*2.52/4095) * 28.5/1.5;
  // print out the values you read:
  Serial.printf("ADC1 analog value = %d\n",adc2);
  Serial.printf("ADC1 millivolts 0-2.5v = %f\n",mv2);
  Serial.printf("ADC1 volts 0-48v = %d\n",mv48/1000);
  Serial.printf("ADC1 volts 0-48v = %d\n",mv48_b);

  // read the analog / millivolts value for channel 3: Current ACS712 Previous 
  // read the analog / millivolts value for channel 4: Current ACS712 New
  // read the analog / millivolts value for channel 0: Current ACS712 New with Voltage Div
  int adc3 = analogRead(0);
  float mv3 = analogReadMilliVolts(0);
  float mv5 = mv3 * 3.6/2; // Divider 2 and 1.6 
  int current = (mv5 - 2500)/0.066;
  if (current < 0.16) {
    current = 0;
  }
  Serial.printf("ADC analog value = %d\n",adc3);
  Serial.printf("ADC millivolts 0-2.5v = %f\n",mv3);
  Serial.printf("ADC millivolts 0-4.5v = %f\n",mv5);
  Serial.printf("ADC milliampleres 0-30v = %d\n",current);

  //Frames
  mv48 = 0x040302001;
  frames[6]=(mv48 & 0xff);//LSB
  frames[7]=((mv48>>8) & 0xff);
  frames[8]=((mv48>>16) & 0xff);
  frames[9]=((mv48>>24) & 0xff);
  
  current = 0x08070605;
  frames[10]=(current & 0xff);//LSB
  frames[11]=((current>>8) & 0xff);
  frames[12]=((current>>16) & 0xff);
  frames[13]=((current>>24) & 0xff);
  
  sendPacket();
  Serial.printf("\nDone!\n");
  delay(100);  // delay in between reads for clear read from serial
}
