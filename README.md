# Low-Cost-Oximeter

This project is a low cost solution for monitoring blood oxygen saturation (SpO2) and pulse rate using an Arduino Uno microcontroller and a MAX30100 pulse oximeter sensor.
![Picture1](https://github.com/Sanjidrifat/Low-Cost-Pulse-Oximeter/assets/56880721/60b9ec2a-c69a-4e96-8d6d-206afa4396be)

## Features

Measures SpO2 and pulse rate in real time  
Displays data on a 16x2 LCD screen  
Audio and visual alerts for abnormal readings  
Low cost and easy to build

### Components

Arduino Uno board  
MAX30100 pulse oximeter sensor  
16x2 LCD screen  
Buzzer  
220 ohm resistor  
Breadboard  
Jumper wires  
9V battery  

#### Installation and Connection

![Slide2](https://github.com/Sanjidrifat/Low-Cost-Pulse-Oximeter/assets/56880721/6856b8c5-cbf6-432a-b5c0-c4da0f26367c)

Clone or download the project code from this repository.  
Connect the components according to the schematic provided in the _Interfacing MAX30100 Pulse Oximeter Sensor with Arduino_ file.  
Open the _pulse-oximeter.ino_ file in the Arduino IDE.  
Upload the code to the Arduino Uno board.  
Power on the system using the 9V battery.

##### Usage

Place the sensor on your fingertip, making sure it is snug and comfortable.  
Wait for the system to stabilize and display the readings on the LCD screen.  
If the readings are abnormal, the buzzer will sound and the screen will display a warning message.  
To turn off the system, disconnect the battery.  

###### Limitations

This project is not a medical device and is not intended for clinical use.  
The accuracy of the measurements may be affected by external factors such as ambient light, motion, and skin pigmentation.  
The MAX30100 sensor may have limitations in detecting low levels of SpO2 and pulse rate variability.  
