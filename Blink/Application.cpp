#include <Arduino.h>
#include "Application.h"
#include "Melody.h"


void Application::setup_app(void){
//  Melody metronome;
//  metronome.create_metronome();  
//  metronome.play_melody();

  Melody melody1;
  melody1.record_melody();
  delay(2000);
  melody1.play_melody();
}



void Application::run_app(void){
  
}
