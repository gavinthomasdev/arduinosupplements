#include <Servo.h>

Servo servo1;

int pos = 0;
int BUTTON = 4;

void setup() {
  servo1.attach(9);

  pinMode(BUTTON, INPUT);
}

void loop() {
  while(!digitalRead(BUTTON))
  for (pos = 0; pos <= 180; pos += 1) {
    servo1.write(pos);
    delay(20);
  }
  for (pos = 180; pos >= 0; pos -= 1) {
    servo1.write(pos);
    delay(20);
  }
}
