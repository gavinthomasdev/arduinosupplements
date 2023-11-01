const int LED1 = 8, BUTTONON = 4, BUTTONOFF = 5;

void setup() {
  Serial.begin(9600);
  Serial.println(F("Program Begin"));

  pinMode(LED1, OUTPUT);
  pinMode(BUTTONON, INPUT);
  pinMode(BUTTONOFF, INPUT);
}

void loop() {
  int toggle = (digitalRead(LED1) ? digitalRead(BUTTONOFF) : digitalRead(BUTTONON));
  
  if (toggle) {
    digitalWrite(LED1, !digitalRead(LED1));
    delay(20);
  }
}
