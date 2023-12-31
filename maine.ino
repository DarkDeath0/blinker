// Determine the bases
int led_pin = 7;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin led_pin as an output.
  pinMode(led_pin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led_pin, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(led_pin, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}
