#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int val;    // variable to read the value from the analog pin
int servoPin = 9;
int potPin = A0;

void setup() {
  myservo.attach(servoPin);
}

void loop() {
  int reading = analogRead(potPin);
  val = map(reading, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(val);                  // sets the servo position according to the scaled value
}
