#include "button.h"

Button::Button(){
  }

Button::Button(int p, int p_m){
  this->pin = p;
  this->pull_mode = p_m;
  }

void Button::setup_device(){
    pinMode(pin, pull_mode);
}

int Button::get_button_state(){
    return digitalRead(pin);
}
