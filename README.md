# BlindAssist_Shoe

## Introduction
This project aims to assist visually impaired individuals by providing a simple and effective obstacle detection system integrated into a shoe. The system uses an Arduino Uno to control an ultrasonic sensor and a piezo buzzer. When the sensor detects an obstacle, it activates the buzzer to alert the user.

## Features
- Detects obstacles within a certain range.
- Provides audio feedback through a piezo buzzer.
- Compact design integrated into a shoe for ease of use.

## Components Required
- Arduino Uno
- Ultrasonic Sensor (e.g., HC-SR04)
- Piezo Buzzer
- Jumper Wires
- Power Source (e.g., 9V battery)
- Shoe for integration

## How It Works
1. The ultrasonic sensor continuously measures the distance to nearby objects.
2. If an obstacle is detected within a predefined range, the sensor sends data to the Arduino.
3. The Arduino processes this data and activates the piezo buzzer to alert the user.

## Code
The code for this project is located in the [`Code/blind_assist_shoe/blind_assist_shoe.ino`](Code/blind_assist_shoe/blind_assist_shoe.ino) file.

## Images
<img width="524" alt="final" src="https://github.com/user-attachments/assets/bb67800c-4c02-4204-9f16-22f47a98f5c4" />
<img width="287" alt="final result" src="https://github.com/user-attachments/assets/5d26937c-e81c-481f-8bbf-2ed1665f190c" />

## Future Improvements
- Add a vibration motor for tactile feedback.
- Improve obstacle detection range and accuracy.
- Integrate a rechargeable power source.
