/*************************************************
  On Board iEE-E32 LED Blink
  Turns an LED on/off on-board LED, repeatedly.
  By Surachai.C IEE.KMUTNB @2023
*************************************************/
// Use for simple verify iEE-E32 Board operating.

#define LED_BUILTIN 2 //LED Port

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                        // wait for a 0.2 second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                        // wait for a 0.2 second
}
