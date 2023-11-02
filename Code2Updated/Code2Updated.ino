const int LED1 = 8, LED2 = 9;
int status = 0;

void setup() {
  Serial.begin(9600); // init serial monitor on 9600 baud
  Serial.println(F("Program Begin")); // print

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  status = !status;
  
  digitalWrite(LED1, status);
  digitalWrite(LED2, !status);
  delay(1000);
}
