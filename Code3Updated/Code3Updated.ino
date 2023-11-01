int LED1 = 8;
int BUTTONON = 4;
int BUTTONOFF = 5;
bool ledOn = false;

void setup() {
  Serial.begin(9600);
  Serial.println(F("Program Begin"));

  pinMode(LED1, OUTPUT);
  pinMode(BUTTONON, INPUT);
  pinMode(BUTTONOFF, INPUT);
}

void loop() {
  int toggle = (ledOn ? digitalRead(BUTTONOFF) : digitalRead(BUTTONON));
  
  if (toggle) {
    ledOn = !ledOn;
    digitalWrite(LED1, ledOn);
    delay(20);
  }
}
