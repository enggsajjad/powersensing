/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/
unsigned long i = 12;//0x48474645;//12;//345;
unsigned long v = 123;//0x44434241;//123;//4569;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  Serial.write('#');
  Serial.write('#');
  Serial.write('#');
    /*delay(200);
  Serial.write(65);
  Serial.write(66);
  Serial.write(67);
  Serial.write(68);
delay(100);
  Serial.write(69);
  Serial.write(70);
  Serial.write(71);
  Serial.write(72);*/

  delay(200);
  Serial.write(v & 0xff);//lsb volt 
  Serial.write((v>>8) & 0xff);
  Serial.write((v>>16) & 0xff);
  Serial.write((v>>24) & 0xff);
  delay(100);
  Serial.write(i & 0xff);//lsb curre 
  Serial.write((i>>8) & 0xff);
  Serial.write((i>>16) & 0xff);
  Serial.write((i>>24) & 0xff);
  v++;
  i++;
  delay(200);
  Serial.write('@');
  Serial.write('@');
  Serial.write('@');
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(2000);                       // wait for a second
}
