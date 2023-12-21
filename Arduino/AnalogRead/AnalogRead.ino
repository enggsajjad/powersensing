#include "esp_adc_cal.h"
#include <driver/adc.h>

uint32_t readADC_Cal(int ADC_Raw)
{
  esp_adc_cal_characteristics_t adc_chars;
  
  esp_adc_cal_characterize(ADC_UNIT_1, ADC_ATTEN_DB_11, ADC_WIDTH_BIT_12, 1100, &adc_chars);
  return(esp_adc_cal_raw_to_voltage(ADC_Raw, &adc_chars));
}

void setup() {
  // initialize serial communication at 115200 bits per second:
  Serial.begin(115200);
  
  adc1_config_width(ADC_WIDTH_BIT_12);
  adc1_config_channel_atten(ADC1_CHANNEL_2,ADC_ATTEN_DB_11);
  //set the resolution to 12 bits (0-4096)
  analogReadResolution(12);
}

void loop() {
  // read the analog / millivolts value for pin 2:
  int analogValue = analogRead(2);
  int analogVolts = analogReadMilliVolts(2);
  float Voltage = readADC_Cal(analogValue);

  int analogData2 = adc1_get_raw((adc1_channel_t)2);
  float Voltage2 = readADC_Cal(analogData2);
  // print out the values you read:
  Serial.printf("ADC analog value = %d\n",analogValue);
  Serial.printf("ADC millivolts value = %d\n",analogVolts);
  Serial.printf("Calib ADC millivolts value = %f\n",Voltage);
  
  Serial.printf("ADC analog value = %d\n",analogData2);
  Serial.printf("Calib ADC millivolts value = %f\n",Voltage2);
  delay(1000);  // delay in between reads for clear read from serial
}
