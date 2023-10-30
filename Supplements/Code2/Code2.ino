int LED1 = 8;

void setup() {
  Serial.begin(9600); // init serial monitor on 9600 baud
  Serial.println(F("Program Begin")); // print

  pinMode(LED1, OUTPUT);
}

void loop() {
  digitalWrite(LED1, HIGH);
  delay(1000);
  digitalWrite(LED1, LOW);
  delay(1000);
}
