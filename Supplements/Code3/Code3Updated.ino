int LED1 = 8;
int BUTTONON = 4;
int BUTTONOFF = 5;

void setup() {
  Serial.begin(9600);
  Serial.println(F("Program Begin"));

  pinMode(LED1, OUTPUT);
  pinMode(BUTTONON, INPUT);
  pinMode(BUTTONOFF, INPUT);
}

void loop() {

  if (digitalRead(BUTTONON)) {
    digitalWrite(LED1, HIGH);
    delay(20);
  } else if (digitalRead(BUTTONOFF)) {
    digitalWrite(LED1, LOW);
    delay(20);
  }

}