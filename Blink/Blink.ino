/*
  ESP8266 Blink by Simon Peter
  Blink the blue LED on the ESP-01 module
  This example code is in the public domain

  The blue LED on the ESP-01 module is connected to GPIO1
  (which is also the TXD pin; so we cannot use Serial.print() at the same time)

  Note that this sketch uses LED_BUILTIN to find the pin with the internal LED
*/

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  pinMode(12, INPUT);               // D6 Button pin
  pinMode(14, INPUT);              // D5 Buzzer pin
  
}

// the loop function runs over and over again forever
void loop() {
  int switchStatus = digitalRead(12); 
  //digitalWrite(LED_BUILTIN, !switchStatus); 
  //digitalWrite(14, switchStatus); 
  Serial.print(switchStatus);
  delay(200);
}
