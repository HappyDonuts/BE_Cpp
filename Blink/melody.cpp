#include <Arduino.h>
#include "melody.h"

Melody::Melody(){
  array_notes = new int[LENGTH];
  for (int i=0;i<LENGTH;i++){
    array_notes[i] = 0;
    }
}

void Melody::create_metronome(){
  for (int i=0;i<LENGTH/100;i++){
    for (int j=0;j<LENGTH/100;j++){ 
      this->array_notes[100*i+j] = NOTE_C4; //100 corr à l'interval entre les notes (la pause)
    }
  }
}

void Melody::setup_melody(){
  // Bouger dans Devicee::setup_device !!
  pinMode(PIN_BUTTON_1, INPUT_PULLUP);   //  Initialize buttons
  pinMode(PIN_BUTTON_2, INPUT_PULLUP);  
  pinMode(PIN_BUTTON_3, INPUT_PULLUP);  
  pinMode(PIN_BUTTON_4, INPUT_PULLUP);    
  pinMode(PIN_BUTTON_5, INPUT_PULLUP);  
  pinMode(PIN_BUTTON_6, INPUT_PULLUP);  
  pinMode(PIN_BUTTON_7, INPUT_PULLUP);  
    
  pinMode(PIN_BUZZER_1, OUTPUT);
  pinMode(PIN_BUZZER_2, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  delay(500);
  
}

void Melody::play_both_melodies(Melody mel_2){
  // Changer vers class Song
  for (int i=0;i<LENGTH;i++){
    if (this->array_notes[i] != 0){
      tone(PIN_BUZZER_1, this->array_notes[i], 10);
      tone(PIN_BUZZER_2, mel_2.array_notes[i], 10);
    }
    delay(10);
  }
}

void Melody::record_melody(Melody mel_2){ 
  // Changer vers song
  digitalWrite(LED_BUILTIN,0);
  for (int i=0;i<LENGTH;i++){   
    const int button_state_1 = digitalRead(PIN_BUTTON_1); 
    const int button_state_2 = digitalRead(PIN_BUTTON_2);
    const int button_state_3 = digitalRead(PIN_BUTTON_3);
    const int button_state_4 = digitalRead(PIN_BUTTON_4);
    const int button_state_5 = digitalRead(PIN_BUTTON_5);
    const int button_state_6 = digitalRead(PIN_BUTTON_6);
    const int button_state_7 = digitalRead(PIN_BUTTON_7);

    tone(PIN_BUZZER_2, mel_2.array_notes[i], 10);
    
    if (button_state_1 == 0){
      this->array_notes[i] = NOTE_C4; 
      tone(PIN_BUZZER_1, this->array_notes[i], 10);
    }   
    if (button_state_2 == 0){
      this->array_notes[i] = NOTE_D4; 
      tone(PIN_BUZZER_1, this->array_notes[i], 10);
    }   
    if (button_state_3 == 0){
      this->array_notes[i] = NOTE_E4; 
      tone(PIN_BUZZER_1, this->array_notes[i], 10);
    }   
    if (button_state_4 == 0){
      this->array_notes[i] = NOTE_F4; 
      tone(PIN_BUZZER_1, this->array_notes[i], 10);
    }
    
    if (button_state_5 == 0){
      this->array_notes[i] = NOTE_G4; 
      tone(PIN_BUZZER_1, this->array_notes[i], 10);
    }

    if (button_state_6 == 0){
        this->array_notes[i] = NOTE_A4; 
        tone(PIN_BUZZER_1, this->array_notes[i], 10);
    }
    if (button_state_7 == 0){
        this->array_notes[i] = NOTE_B4; 
        tone(PIN_BUZZER_1, this->array_notes[i], 10);
    }    
    delay(10);
    
  }
  digitalWrite(LED_BUILTIN,1);
  
}
