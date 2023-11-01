#include <Servo.h>

Servo servo1;
const int BUTTON = 4;

void setup() {
  servo1.attach(9);

  pinMode(BUTTON, INPUT);
}

void loop() {
  while(!digitalRead(BUTTON))

  for (int pos = 0; pos <= 360; pos += 1) {
    servo1.write(pos <= 180 ? pos : (180 - (pos - 180)));
    delay(20);
  }
}
