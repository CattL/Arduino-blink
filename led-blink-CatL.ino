
// the setup function runs once when you press reset or power the board

void setup() {
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, LOW);
  delay(250);
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(250);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(250);
  delay(500);              // wait for a second
  digitalWrite(13, HIGH);
}
