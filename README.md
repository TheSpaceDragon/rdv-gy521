# rdv-gy521 Library

An Arduino library to simplify reading values from the GY-521 gyroscope, accelerometer, and temperature sensor. Shortens code and makes it much more readable. Get raw sensor values or processed data in SI units (m/s^2, degrees, celsius) with simple to use functions!

## Jump To
- [Available Functions](#available-functions)
- [Installation](#installation) <br/>
&nbsp; 1. [Library Manager](#1-library-manager)<br/>
&nbsp; 2. [.ZIP File](#2-zip-file)

## Available Functions
Here are the available functions and their purposes.
- **sensor_init()** <br />
&nbsp;Initializes device for communication. Absolutely crucial to initialize the device in the void setup() function. <br />
- **get_raw_accel_x()** <br />
&nbsp;Returns acceleration value in the x-axis as measured by the sensor. <br />
- **get_raw_accel_y()** <br />
&nbsp;Returns acceleration value in the y-axis as measured by the sensor.<br />
- **get_raw_accel_z()** <br />
&nbsp;Returns acceleration value in the z-axis as measured by the sensor.<br />
- **get_accel_x()** <br />
&nbsp;Returns acceleration in the x-axis in m/s^2.<br />
- **get_accel_y()** <br />
&nbsp;Returns acceleration in the y-axis in m/s^2.<br />
- **get_accel_z()** <br />
&nbsp;Returns acceleration in the z-axis in m/s^2.<br />
- **get_raw_gyro_x()** <br />
&nbsp;Returns value of rotation in the x-axis as measured by the sensor.<br />
- **get_raw_gyro_y()** <br />
&nbsp;Returns value of rotation in the y-axis as measured by the sensor.<br />
- **get_raw_gyro_z()** <br />
&nbsp;Returns value of rotation in the z-axis as measured by the sensor.<br />
- **get_gyro_x()** <br />
&nbsp;Returns angle of rotation in the x-axis in degrees.<br />
- **get_gyro_y()** <br />
&nbsp;Returns angle of rotation in the y-axis in degrees.<br />
- **get_gyro_z()** <br />
&nbsp;Returns angle of rotation in the z-axis in degrees.<br />
- **get_temperature()** <br />
&nbsp;Returns temperature at the sensor in degrees celsius.<br />

## Installation
There are two ways to install this library.<br />
### 1. Library Manager 
- &nbsp; Launch the Arduino IDE<br />
- &nbsp; Navigate to Tools > Manage Libraries...<br />
- &nbsp; Search for "rdv-gy512" in the query bar.<br /> 
- &nbsp; Install the latest version of the library<br /><br />
<img width="796" alt="Screen Shot 2022-08-26 at 3 02 00 PM" src="https://user-images.githubusercontent.com/70773397/186973894-3e89dab0-c006-4f8f-9099-b0cce59a49e7.png"><br />
### 2. .ZIP File 
- &nbsp; Download this repository as a .ZIP file<br />
- &nbsp; Launch the Arduino IDE<br />
- &nbsp; Navigate to Sketch > Include Library > Add .ZIP library<br />
- &nbsp; Find .ZIP file on the Finder menu and select choose<br /> 

