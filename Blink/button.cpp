#include "button.h"

// Empty constructor
Button::Button(){
  }

// Constructor
Button::Button(int p, int p_m){
  this->pin = p;
  this->pull_mode = p_m;
  }

// Configures the arduino pin
void Button::setup_device(){
    pinMode(pin, pull_mode);
    this->initialized = true;
}

// Gets the button state to see if it has been pressed
int Button::get_button_state(){
  if (pull_mode != INPUT_PULLUP){
    throw ERREUR_PULLMODE;
  } else {
    return digitalRead(pin);
  }
}
