#include <PhotoResistor.h>

PhotoResistor sensor;

void setup() {
  Serial.begin(9600);
  sensor.attach(A0);  // Attach sensor to analog pin A0
}

void loop() {
  Serial.print("Voltage: ");
  Serial.println(sensor.show(1));  // Show voltage
  
  Serial.print("Resistance: ");
  Serial.println(sensor.show(2));  // Show resistance
  
  Serial.print("Lux: ");
  Serial.println(sensor.show(3));  // Show lux
  
  delay(1000);
}
