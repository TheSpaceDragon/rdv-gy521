#include "RDV_GY512.h"
#include "Wire.h"

#define DVC_ADDR 0x68
#define PWR_ADDR 0x6B

#define ACCEL_SENS 16384
#define GYRO_SENS 131
#define GRAVITY_CONSTANT 9.81
#define RETURN_SIZE 2


#define X_ACCEL_ADDR 0x3B
#define Y_ACCEL_ADDR 0x3D
#define Z_ACCEL_ADDR 0x3F

#define X_GYRO_ADDR 0x43
#define Y_GYRO_ADDR 0x45
#define Z_GYRO_ADDR 0x47

#define TEMP_ADDR 0x41

char tmp_str[7];

GY_512::GY_512(){}

void GY_512::sensor_init(){
  Wire.begin();
  Wire.beginTransmission(DVC_ADDR);
  Wire.write(PWR_ADDR);
  Wire.write(0);
  Wire.endTransmission(true);
}

int16_t GY_512::get_raw_accel_x(){
   Wire.beginTransmission(DVC_ADDR);
   Wire.write(X_ACCEL_ADDR);
   Wire.endTransmission(false);

   Wire.requestFrom(DVC_ADDR, RETURN_SIZE, true);
   return (Wire.read() << 8 | Wire.read());
}

int16_t GY_512::get_raw_accel_y(){
   Wire.beginTransmission(DVC_ADDR);
   Wire.write(Y_ACCEL_ADDR);
   Wire.endTransmission(false);

   Wire.requestFrom(DVC_ADDR, RETURN_SIZE, true);
   return (Wire.read() << 8 | Wire.read());
}

int16_t GY_512::get_raw_accel_z(){
   Wire.beginTransmission(DVC_ADDR);
   Wire.write(Z_ACCEL_ADDR);
   Wire.endTransmission(false);

   Wire.requestFrom(DVC_ADDR, RETURN_SIZE, true);
   return (Wire.read() << 8 | Wire.read());
}

int16_t GY_512::get_raw_gyro_x(){
   Wire.beginTransmission(DVC_ADDR);
   Wire.write(X_GYRO_ADDR);
   Wire.endTransmission(false);

   Wire.requestFrom(DVC_ADDR, RETURN_SIZE, true);
   return (Wire.read() << 8 | Wire.read());
}

int16_t GY_512::get_raw_gyro_y(){
   Wire.beginTransmission(DVC_ADDR);
   Wire.write(Y_GYRO_ADDR);
   Wire.endTransmission(false);

   Wire.requestFrom(DVC_ADDR, RETURN_SIZE, true);
   return (Wire.read() << 8 | Wire.read());
}

int16_t GY_512::get_raw_gyro_z(){
   Wire.beginTransmission(DVC_ADDR);
   Wire.write(Z_GYRO_ADDR);
   Wire.endTransmission(false);

   Wire.requestFrom(DVC_ADDR, RETURN_SIZE, true);
   return (Wire.read() << 8 | Wire.read());
}

double GY_512::get_accel_x(){
   Wire.beginTransmission(DVC_ADDR);
   Wire.write(X_ACCEL_ADDR);
   Wire.endTransmission(false);

   Wire.requestFrom(DVC_ADDR, RETURN_SIZE, true);
   return double(int16_t(Wire.read() << 8 | Wire.read()) * GRAVITY_CONSTANT/ ACCEL_SENS);
}

double GY_512::get_accel_y(){
   Wire.beginTransmission(DVC_ADDR);
   Wire.write(Y_ACCEL_ADDR);
   Wire.endTransmission(false);

   Wire.requestFrom(DVC_ADDR, RETURN_SIZE, true);
   return double(int16_t(Wire.read() << 8 | Wire.read()) * GRAVITY_CONSTANT/ ACCEL_SENS);
}

double GY_512::get_accel_z(){
   Wire.beginTransmission(DVC_ADDR);
   Wire.write(Z_ACCEL_ADDR);
   Wire.endTransmission(false);

   Wire.requestFrom(DVC_ADDR, RETURN_SIZE, true);
   return double(int16_t(Wire.read() << 8 | Wire.read()) * GRAVITY_CONSTANT/ ACCEL_SENS);
}

double GY_512::get_gyro_x(){
   Wire.beginTransmission(DVC_ADDR);
   Wire.write(X_GYRO_ADDR);
   Wire.endTransmission(false);

   Wire.requestFrom(DVC_ADDR, RETURN_SIZE, true);
   return double(int16_t(Wire.read() << 8 | Wire.read()) / GYRO_SENS);
}

double GY_512::get_gyro_y(){
   Wire.beginTransmission(DVC_ADDR);
   Wire.write(Y_GYRO_ADDR);
   Wire.endTransmission(false);

   Wire.requestFrom(DVC_ADDR, RETURN_SIZE, true);
   return double(int16_t(Wire.read() << 8 | Wire.read()) / GYRO_SENS);
}

double GY_512::get_gyro_z(){
   Wire.beginTransmission(DVC_ADDR);
   Wire.write(Z_GYRO_ADDR);
   Wire.endTransmission(false);

   Wire.requestFrom(DVC_ADDR, RETURN_SIZE, true);
   return double(int16_t(Wire.read() << 8 | Wire.read()) / GYRO_SENS);
}

double GY_512::get_temperature(){
   Wire.beginTransmission(DVC_ADDR);
   Wire.write(TEMP_ADDR);
   Wire.endTransmission(false);

   Wire.requestFrom(DVC_ADDR, RETURN_SIZE, true);
   int16_t temp_out = Wire.read() << 8 | Wire.read();
   return ((temp_out/340) + 36.53);
}
