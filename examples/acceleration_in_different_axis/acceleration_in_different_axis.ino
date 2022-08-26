#include <RDV_GY512.h>

GY_512 device = GY_512();

void setup() {
  Serial.begin(9600);
  device.sensor_init(); // initializes device for communication
}

void loop() {
   Serial.println(device.get_accel_x()); // prints acceleration in the x-axis in m/s^2
   Serial.println(device.get_accel_y()); // prints acceleration in the y-axis in m/s^2
   Serial.println(device.get_accel_z()); // prints acceleration in the z-axis in m/s^2
}
