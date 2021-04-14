#include <Arduino.h>
#include "Application.h"
#include "Melody.h"


void Application::setup_app(void){
  Melody metronome;
  
  for (int i=0;i<10;i++){
    for (int j=0;j<10;j++){ 
      metronome.get_array_notes()[100*i+j] = NOTE_C4;
    }
  }
//metronome.get_array_notes()
  for (int i=0;i<1000;i++){
    
    if (metronome.get_array_notes()[i] != 0){
      tone(14, NOTE_C4, 10);
    }
    delay(10);
  }
   
}



void Application::run_app(void){
  
}
