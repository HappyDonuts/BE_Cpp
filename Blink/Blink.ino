#include "Application.h"
#include "Note_frequency.h"


// Instance application
Application oneManBand;

void setup() {
  oneManBand.setup_app();
  oneManBand.run_app();
  
}

// the loop function runs over and over again forever
void loop() {
  //int switchStatus = digitalRead(12); 
  //digitalWrite(LED_BUILTIN, !switchStatus); 
  //digitalWrite(14, switchStatus); 
  //Serial.print(switchStatus);
  //delay(2000);
}
