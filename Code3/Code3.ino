const int LED1 = 8, BUTTON = 4;

void setup() {
  Serial.begin(9600);
  Serial.println(F("Program Begin"));

  pinMode(LED1, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  if (digitalRead(BUTTON)) {
    digitalWrite(LED1, HIGH);
    delay(20);
  }
}