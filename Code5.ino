#include <Servo.h>

Servo servo1;

int angle = 0;
int potentio = A0;

void setup() {
  servo1.attach(9);
}

void loop() {
  angle = analogRead(potentio);
  angle = map(angle, 0, 1023, 0, 179);
  // angle = map(analogRead(potentio), 0, 1023, 0, 179)
  servo1.write(angle);
  Serial.println(angle);
  delay(5);
}
