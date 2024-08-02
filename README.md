# SMART_DOOR_LOCK_SYSTEM
ANGUPARU PATRICIA 23/U/2193/GIM/PS
Smart Lock System for Smart Home
This project implements a simple smart lock system using an Arduino microcontroller, a keypad for user input, and a servo motor to actuate the lock. The system allows users to enter a password to unlock the door.

Table of Contents
Hardware Requirements
Software Requirements
Installation
Usage
Code Explanation
License
Hardware Requirements
Arduino microcontroller (e.g., Arduino Uno)
4x4 keypad
Servo motor
Jumper wires
Breadboard (optional)
Software Requirements
Arduino IDE
Keypad library (Keypad.h)
Servo library (Servo.h)
Installation
Install Arduino IDE: Download and install the Arduino IDE from the official website.

Install Libraries:

Open the Arduino IDE.
Go to Sketch > Include Library > Manage Libraries.
Search for and install the Keypad library.
Search for and install the Servo library.
Upload the Code:

Connect your Arduino board to your computer.
Open the Arduino IDE and paste the provided code into a new sketch.
Select the correct board and port from the Tools menu.
Click the Upload button to upload the code to your Arduino board.
Usage
Connect the Hardware:

Connect the keypad to the Arduino according to the pin definitions in the code.
Connect the servo motor to the Arduino using the specified pin (servoPin).
Power On:

Power on the Arduino board.
The servo motor should lock the door initially.
Enter Password:

Use the keypad to enter the password (default is 1234).
Press # to submit the password.
If the password is correct, the servo motor will unlock the door for 5 seconds and then lock it again.
Press * to clear the input password.
