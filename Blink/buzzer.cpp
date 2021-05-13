#include "buzzer.h"

Buzzer::Buzzer(){ 
}

Buzzer::Buzzer(int p, int p_m){
  this->pin = p;
  this->pin_mode = p_m; 
}

void Buzzer::setup_device(){
  pinMode(pin, pin_mode);
}

void Buzzer::play_tone(int note, int note_length){
  tone(pin, note, note_length);
}
