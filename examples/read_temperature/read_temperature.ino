#include <RDV_GY521.h>

GY_521 device = GY_521();

void setup() {
  Serial.begin(9600);
  device.sensor_init(); // initializes device for communication
}

void loop() {
   Serial.println(device.get_temperature()); // prints temperature at the sensor in degrees celsius
}
