#include <Arduino.h>
#include "Application.h"
#include "Melody.h"


void Application::setup_app(void){
//  Melody metronome;
//  metronome.create_metronome();  
//  metronome.play_melody();

  Melody melody1;
  Melody melody2;

  melody1.setup_melody();
  melody1.record_melody(melody2);
  delay(2000);
  melody2.record_melody(melody1);
  delay(2000);
  melody1.play_both_melodies(melody2);
}



void Application::run_app(void){
  
}
