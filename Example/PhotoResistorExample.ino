#include <PhotoResistor.h>

PhotoResistor sensor;

void setup() {
  Serial.begin(9600);
  sensor.attach(A0);  // Attach sensor to analog pin A0
}

void loop() {
  Serial.print("Voltage: ");
  Serial.println(sensor.show(voltage));  // Show voltage
  
  Serial.print("Resistance: ");
  Serial.println(sensor.show(resistance));  // Show resistance
  
  Serial.print("Lux: ");
  Serial.println(sensor.show(lux));  // Show lux
  
  delay(1000);
}
