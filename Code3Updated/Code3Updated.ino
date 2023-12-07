const int LED1 = 8, BUTTONON = 4, BUTTONOFF = 5; // pins

void setup() {
  Serial.begin(9600); // init serial port at 9600 baud
  Serial.println(F("Program Begin")); // print string "Program Begin" from flash

  pinMode(LED1, OUTPUT); // set LED1 pin to output
  pinMode(BUTTONON, INPUT); // set BUTTONON pin to input
  pinMode(BUTTONOFF, INPUT); // set BUTTONOFF pin to input
}

void loop() {
  bool ledOn = digitalRead(LED1); // store current digital value of LED1 pin
  int toggle = (ledOn ? digitalRead(BUTTONOFF) : digitalRead(BUTTONON)); // (ternary) if ledOn then read digital value from BUTTONOFF. else, read digital value from BUTTONON
  
  if (toggle) { // if toggle
    digitalWrite(LED1, !ledOn); // write opposite digital value to LED1 pin
    delay(20); // delay for 20 ms
  }
}
