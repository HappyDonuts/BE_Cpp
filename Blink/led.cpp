#include "led.h"


Led::Led(int p, int p_m){
  this->pin = p;
  this->pin_mode = p_m;
}

void Led::setup_device(){
  pinMode(pin, pin_mode);
}


void Led::set_led(int state){
  digitalWrite(pin, state);
}
