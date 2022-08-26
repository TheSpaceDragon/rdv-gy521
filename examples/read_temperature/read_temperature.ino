#include <RDV_GY512.h>

GY_512 device = GY_512();

void setup() {
  Serial.begin(9600);
  device.sensor_init(); // initializes device for communication
}

void loop() {
   Serial.println(device.get_temperature()); // prints temperature at the sensor in degrees celsius
}
