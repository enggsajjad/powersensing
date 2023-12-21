#define PLEN 16
#include "Crc16.h"
//Crc 16 library (XModem)
Crc16 crc; 

byte data[PLEN-2] = {0x5A, 0xA5, 0x0A, 0x00, 0x91, 0x03, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08};
// 0x5CEE
void sendPacket()
{
  int value = crc.XModemCrc(data,0,PLEN-2);


  //Serial.print("XModem crc = 0x");    
  //Serial.println(value, HEX);
  for (int i = 0; i < 4; i++)
    Serial.write(data[i]);

  Serial.write(value & 0xff);
  Serial.write((value>>8) & 0xff);
  
  for (int i = 4; i < (PLEN-2); i++)
    Serial.write(data[i]);
  
}


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
}

// the loop function runs over and over again forever
void loop() {
  sendPacket();
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
