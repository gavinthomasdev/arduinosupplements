int LED1 = 8;
int BUTTON = 4;
int buttonState = 0;

void setup() {
  Serial.begin(9600);
  Serial.println(F("Program Begin"));

  pinMode(LED1, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  buttonState = digitalRead(BUTTON);

  //digitalWrite(LED1, (buttonState == HIGH ? HIGH : LOW));
  digitalWrite(LED1, buttonState);

  if (buttonState == HIGH) delay(20);
  
  /*if (buttonState == HIGH) {
    digitalWrite(LED1, HIGH);
    delay(20);
  } else {
    digitalWrite(LED1, LOW);
  }*/
}
