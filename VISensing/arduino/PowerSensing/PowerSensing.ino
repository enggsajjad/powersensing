#include "esp_adc_cal.h"
#include <driver/adc.h>

uint32_t readADC_Cal(int ADC_Raw)
{
  esp_adc_cal_characteristics_t adc_chars;
  
  esp_adc_cal_characterize(ADC_UNIT_1, ADC_ATTEN_DB_11, ADC_WIDTH_BIT_12, 1100, &adc_chars);
  return(esp_adc_cal_raw_to_voltage(ADC_Raw, &adc_chars));
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

  Serial.write('#');
  Serial.write('#');
  Serial.write('#');
  
  Serial.write(mv48 & 0xff);//LSB
  Serial.write((mv48>>8) & 0xff);
  Serial.write((mv48>>16) & 0xff);
  Serial.write((mv48>>24) & 0xff);

  Serial.write(current & 0xff);//LSB
  Serial.write((current>>8) & 0xff);
  Serial.write((current>>16) & 0xff);
  Serial.write((current>>24) & 0xff);
  
  Serial.write('@');
  Serial.write('@');
  Serial.write('@');
  Serial.printf("\nDone!\n");
  delay(100);  // delay in between reads for clear read from serial
}
