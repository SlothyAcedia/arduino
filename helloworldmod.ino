void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(9, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(9, HIGH);  // turn the LED at Pin 9 on (HIGH is the voltage level)
  delay(500);                      // wait for 500ms
  digitalWrite(9, LOW);   // turn the LED at Pin 9 off by making the voltage LOW
  delay(500);                      // wait for 500ms
}
