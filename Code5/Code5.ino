#include <Servo.h>

Servo servo1;
const int potentio = A0;

void setup() {
  Serial.begin(9600);
  servo1.attach(9);
}

void loop() {
  int angle = map(analogRead(potentio), 0, 1023, 0, 179);
  servo1.write(angle);
  Serial.println(angle);
  delay(5);
}
