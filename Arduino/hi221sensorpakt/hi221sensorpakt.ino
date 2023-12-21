void sendPacket()
{
Serial.write(0x5A);
Serial.write(0xA5);
Serial.write(0x4C);
Serial.write(0x00);
Serial.write(0x6C);
Serial.write(0x51);
Serial.write(0x91);
Serial.write(0x00);
Serial.write(0xA0);
Serial.write(0x3B);
Serial.write(0x01);
Serial.write(0xA8);
Serial.write(0x02);
Serial.write(0x97);
Serial.write(0xBD);
Serial.write(0xBB);
Serial.write(0x04);
Serial.write(0x00);
Serial.write(0x9C);
Serial.write(0xA0);
Serial.write(0x65);
Serial.write(0x3E);
Serial.write(0xA2);
Serial.write(0x26);
Serial.write(0x45);
Serial.write(0x3F);
Serial.write(0x5C);
Serial.write(0xE7);
Serial.write(0x30);
Serial.write(0x3F);
Serial.write(0xE2);
Serial.write(0xD4);
Serial.write(0x5A);
Serial.write(0xC2);
Serial.write(0xE5);
Serial.write(0x9D);
Serial.write(0xA0);
Serial.write(0xC1);
Serial.write(0xEB);
Serial.write(0x23);
Serial.write(0xEE);
Serial.write(0xC2);
Serial.write(0x78);
Serial.write(0x77);
Serial.write(0x99);
Serial.write(0x41);
Serial.write(0xAB);
Serial.write(0xAA);
Serial.write(0xD1);
Serial.write(0xC1);
Serial.write(0xAB);
Serial.write(0x2A);
Serial.write(0x0A);
Serial.write(0xC2);
Serial.write(0x8D);
Serial.write(0xE1);
Serial.write(0x42);
Serial.write(0x42);
Serial.write(0x8F);
Serial.write(0x1D);
Serial.write(0xA8);
Serial.write(0xC1);
Serial.write(0x1E);
Serial.write(0x0C);
Serial.write(0x36);
Serial.write(0xC2);
Serial.write(0xE6);
Serial.write(0xE5);
Serial.write(0x5A);
Serial.write(0x3F);
Serial.write(0xC1);
Serial.write(0x94);
Serial.write(0x9E);
Serial.write(0x3E);
Serial.write(0xB8);
Serial.write(0xC0);
Serial.write(0x9E);
Serial.write(0xBE);
Serial.write(0xBE);
Serial.write(0xDF);
Serial.write(0x8D);
Serial.write(0xBE);  
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
