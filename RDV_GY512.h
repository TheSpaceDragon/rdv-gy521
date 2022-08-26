#ifndef RDV_GY512_H
#define RDC_GY512_H

#include "Arduino.h"

class GY_512{
  public:
    GY_512();
    
    void sensor_init();
  
    int16_t get_raw_accel_x();
    int16_t get_raw_accel_y();
    int16_t get_raw_accel_z();

    int16_t get_raw_gyro_x();
    int16_t get_raw_gyro_y();
    int16_t get_raw_gyro_z();

    double get_accel_x();
    double get_accel_y();
    double get_accel_z();

    double get_gyro_x();
    double get_gyro_y();
    double get_gyro_z();

    double get_temperature();
};

#endif
