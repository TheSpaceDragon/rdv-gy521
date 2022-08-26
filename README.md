# rdv-gy512 Library

An Arduino library to simplify reading values from the GY-512 gyroscope, accelerometer, and temperature sensor. Shortens code and makes it much more readable. Get raw sensor values or processed data in SI units (m/s^2, degrees, celsius) with simple to use functions!

## Available Functions
Here are the available functions and their purposes.

- **sensor_init()** <br />
&nbsp;Initializes device for communication. Absolutely crucial to initialize the device in the void setup() function. <br /><br />
- **get_raw_accel_x()** <br />
&nbsp;Returns acceleration value in the x-axis as measured by the sensor. <br /><br />
- **get_raw_accel_y()** <br />
&nbsp;Returns acceleration value in the y-axis as measured by the sensor.<br /><br />
- **get_raw_accel_z()** <br />
&nbsp;Returns acceleration value in the z-axis as measured by the sensor.<br /><br />
- **get_accel_x()** <br />
&nbsp;Returns acceleration in the x-axis in m/s^2.<br /><br />
- **get_accel_y()** <br />
&nbsp;Returns acceleration in the y-axis in m/s^2.<br /><br />
- **get_accel_z()** <br />
&nbsp;Returns acceleration in the z-axis in m/s^2.<br /><br />
- **get_raw_gyro_x()** <br />
&nbsp;Returns value of rotation in the x-axis as measured by the sensor.<br /><br />
- **get_raw_gyro_y()** <br />
&nbsp;Returns value of rotation in the y-axis as measured by the sensor.<br /><br />
- **get_raw_gyro_z()** <br />
&nbsp;Returns value of rotation in the z-axis as measured by the sensor.<br /><br />
- **get_gyro_x()** <br />
&nbsp;Returns angle of rotation in the x-axis in degrees.<br /><br />
- **get_gyro_y()** <br />
&nbsp;Returns angle of rotation in the y-axis in degrees.<br /><br />
- **get_gyro_z()** <br />
&nbsp;Returns angle of rotation in the z-axis in degrees.<br /><br />
- **get_temperature()** <br />
&nbsp;Returns temperature at the sensor in degrees celsius.<br /><br />
