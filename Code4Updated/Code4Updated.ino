#include <Servo.h> // import Servo library

Servo servo1; // create Servo servo1
const int BUTTON = 4; // button pin

void setup() {
  servo1.attach(9); // attach servo1 to pin 9

  pinMode(BUTTON, INPUT); // set button pin to input
}

void loop() {
  while(!digitalRead(BUTTON)) // wait for button to be pressed

  for (int pos = 0; pos <= 360; pos += 1) { // for all numbers zero to 360
    servo1.write(pos <= 180 ? pos : (180 - (pos - 180))); // if pos is greater than 180 translate to opposite (181 becomes 179, 190 becomes 170, etc.) 
    delay(20); // delay for 20ms
  }
}
