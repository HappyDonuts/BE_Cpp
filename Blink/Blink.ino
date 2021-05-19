#include "OneManBandApp.h"
#include "Note_frequency.h"


// Instance application
OneManBandApp oneManBand;

void setup() {
  Serial.begin(9600);
  oneManBand.setup_app();
  oneManBand.run_app();
  
}

// the loop function runs over and over again forever
void loop() {
}
