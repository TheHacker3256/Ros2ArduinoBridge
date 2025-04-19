# Ros2ArduinoBridge

A ROS2 control interface for an Arduino Uno motor controller.

## Table of Contents
-----------------

* [Hardware Requirements](#hardware-requirements)
* [Setup](#setup)
* [Usage](#usage)

## Hardware Requirements
-----------------------

* **Arduino Uno**: [https://store-usa.arduino.cc/products/arduino-uno-rev3](https://store-usa.arduino.cc/products/arduino-uno-rev3)
* **Duinotech Motor Shield**: [https://www.jaycar.com.au/duinotech-arduino-compatible-motor-servo-controller-module/p/XC4472](https://www.jaycar.com.au/duinotech-arduino-compatible-motor-servo-controller-module/p/XC4472)
* **4 DC Motors**

## Setup
--------

1. Install the Arduino IDE on your computer.
2. Connect the Arduino Uno to your computer via a USB cable.
3. Download the repository
4. Open the Arduino IDE and navigate to `File` > `Open` and select the `Ros2ArduinoBridge` folder.
5. Upload the code to the Arduino Uno using the `Upload` button.
6. Connect the Duinotech Motor Shield to the Arduino Uno as per the manufacturer's instructions.
7. Connect the 4 DC Motors to the Duinotech Motor Shield as per the manufacturer's instructions.

## Usage
-----

The Arduino Uno will receive serial commands from a ROS2 control hardware interface and use those commands to control the 4 DC motors.
This repository is used in my Omnicar Project to control the motors

## Related Projects
-------------------

* **Omnicar**: [https://github.com/TheHacker3256/Omnicar](https://github.com/TheHacker3256/Omnicar)

This project is a ROS2 control interface for an Arduino Uno motor controller. It uses the Duinotech Motor Shield to control 4 DC motors.
