#include "Application.h"

// Instance application
Application oneManBand;

void setup() {
  Serial.begin(9600);
  Serial.print("Hello World");
  //oneManBand.setup_app();
  
  //pinMode(LED_BUILTIN, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  //pinMode(12, INPUT);               // D6 Button pin
  //pinMode(14, INPUT);              // D5 Buzzer pin
  
}

// the loop function runs over and over again forever
void loop() {
  //int switchStatus = digitalRead(12); 
  //digitalWrite(LED_BUILTIN, !switchStatus); 
  //digitalWrite(14, switchStatus); 
  //Serial.print(switchStatus);
  //delay(200);
}
