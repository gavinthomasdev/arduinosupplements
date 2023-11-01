int LED1 = 8, LED2 = 9;
int STATUS = 0;

void setup() {
  Serial.begin(9600); // init serial monitor on 9600 baud
  Serial.println(F("Program Begin")); // print

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  STATUS = !STATUS;
  
  digitalWrite(LED1, STATUS);
  digitalWrite(LED2, !STATUS);
  delay(1000);
}
