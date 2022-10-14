#include <RDV_GY521.h>

GY_521 device = GY_521();

void setup() {
  Serial.begin(9600);
  device.sensor_init(); // initializes device for communication
}

void loop() {
   Serial.println(device.get_gyro_x()); // prints angle of rotation in the x-axis in degrees
   Serial.println(device.get_gyro_y()); // prints angle of rotation in the y-axis in degrees
   Serial.println(device.get_gyro_z()); // prints angle of rotation in the z-axis in degrees
}
