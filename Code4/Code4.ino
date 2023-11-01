#include <Servo.h>

Servo servo1;

void setup() {
  servo1.attach(9);
}

void loop() {
  /*for (pos = 0; pos <= 180; pos += 1) {
    servo1.write(pos);
    delay(20);
  }
  for (pos = 180; pos >= 0; pos -= 1) {
    servo1.write(pos);
    delay(20);
  }*/

  for (int pos = 0; pos <= 360; pos += 1) {
    servo1.write(pos <= 180 ? pos : (180 - (pos - 180));
    delay(20);
  }
}
