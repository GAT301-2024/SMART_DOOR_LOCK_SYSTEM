#include <Keypad.h>
#include <Servo.h>

// Define the keypad layout
const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};
byte rowPins[ROWS] = {2, 3, 4, 5}; // Connect to the row pinouts of the keypad
byte colPins[COLS] = {6, 7, 8, 9}; // Connect to the column pinouts of the keypad

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

// Define the servo motor pin
const int servoPin = 10;
Servo lockServo;

// Define the password
const String password = "1234";
String inputPassword = "";

void setup() {
  Serial.begin(9600);
  lockServo.attach(servoPin);
  lockServo.write(0); // Lock the door initially
}

void loop() {
  char key = keypad.getKey();

  if (key) {
    Serial.print("Key pressed: ");
    Serial.println(key);

    if (key == '*') {
      // Clear the input password
      inputPassword = "";
      Serial.println("Password cleared");
    } else if (key == '#') {
      // Check the input password
      if (inputPassword == password) {
        Serial.println("Password correct, unlocking the door");
        lockServo.write(90); // Unlock the door
        delay(5000); // Keep the door unlocked for 5 seconds
        lockServo.write(0); // Lock the door again
      } else {
        Serial.println("Incorrect password");
      }
      inputPassword = ""; // Clear the input password after checking
    } else {
      // Append the key to the input password
      inputPassword += key;
    }
  }
}
