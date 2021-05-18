#include "buzzer.h"

// Empty constructor
Buzzer::Buzzer(){ 
}

// Constructor
Buzzer::Buzzer(int p, int p_m){
  this->pin = p;
  this->pin_mode = p_m; 
}

// Configures arduino pin associated
void Buzzer::setup_device(){
  pinMode(pin, pin_mode);
  this->initialized = true;
}

// Plays a tone with frequency note (PWM) and length note_length  
void Buzzer::play_tone(int note, int note_length){
  tone(pin, note, note_length);
}
