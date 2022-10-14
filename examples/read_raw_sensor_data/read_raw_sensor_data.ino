#include <RDV_GY521.h>

GY_521 device = GY_521();

void setup() {
  Serial.begin(9600);
  device.sensor_init(); // initializes device for communication
}

void loop() {
   Serial.println(device.get_raw_accel_x()); // prints acceleration value in the x-axis as measured by the sensor
   Serial.println(device.get_raw_accel_y()); // prints acceleration value in the y-axis as measured by the sensor
   Serial.println(device.get_raw_accel_z()); // prints acceleration value in the z-axis as measured by the sensor
  
   Serial.println(device.get_raw_gyro_x()); // prints value of rotation in the x-axis as measured by the sensor
   Serial.println(device.get_raw_gyro_y()); // prints value of rotation in the y-axis as measured by the sensor
   Serial.println(device.get_raw_gyro_z()); // prints value of rotation in the z-axis as measured by the sensor
}
