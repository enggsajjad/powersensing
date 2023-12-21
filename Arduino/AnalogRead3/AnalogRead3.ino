

void setup() {
  // initialize serial communication at 115200 bits per second:
  Serial.begin(115200);
  
  //set the resolution to 12 bits (0-4096)
  analogReadResolution(12);
}

void loop() {
  // read the analog / millivolts value for pin 2:
  int adc3 = analogRead(3);
  
  int mv3 = analogReadMilliVolts(3);
  float current = (mv3 - 2500)/0.066;
  // print out the values you read:
  Serial.printf("ADC analog value = %d\n",adc3);
  Serial.printf("ADC millivolts value = %d\n",mv3);
  Serial.printf("ADC milli-Amps value = %f\n",current);
  
  delay(100);  // delay in between reads for clear read from serial
}
