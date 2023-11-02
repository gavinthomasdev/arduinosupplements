#include <Servo.h>

Servo servo1;
const int POTENTIO = A0;

void setup() {
  Serial.begin(9600);
  servo1.attach(9);
}

void loop() {
  int angle = map(analogRead(POTENTIO), 0, 1023, 0, 89);
  servo1.write(angle);
  Serial.println(angle);
  delay(5);
}
