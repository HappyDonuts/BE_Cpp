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

void Melody::play_melody(){
  for (int i=0;i<LENGTH;i++){
    if (this->array_notes[i] != 0){
      tone(15, this->array_notes[i], 10);
    }
    delay(10);
  }
}

void Melody::record_melody(){
  int PIN_BUZZER = PIN_TX;
  //LED vert pour start
  pinMode(PIN_D0, INPUT_PULLUP);   //  Initialize buttons
  pinMode(PIN_D1, INPUT_PULLUP);  
  pinMode(PIN_D2, INPUT_PULLUP);  
 // pinMode(PIN_D3, INPUT_PULLUP);  
//  pinMode(PIN_D4, INPUT_PULLUP);   //D4 NOT IN USE
  pinMode(PIN_D5, INPUT_PULLUP);    
  pinMode(PIN_D6, INPUT_PULLUP);  
  pinMode(PIN_D7, INPUT_PULLUP);  
  pinMode(PIN_D8, INPUT_PULLUP);  
  pinMode(PIN_RX, INPUT_PULLUP); 
    
  pinMode(LED_BUILTIN, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  
  delay(1000);
  digitalWrite(LED_BUILTIN,0);
  
  for (int i=0;i<LENGTH;i++){   
    const int button_state_D0=digitalRead(PIN_D0);
    const int button_state_D1=digitalRead(PIN_D1);
    const int button_state_D2=digitalRead(PIN_D2);
//    const int button_state_D3=digitalRead(PIN_D3);
  //  const int button_state_D4=digitalRead(PIN_D4); //CANNOT USE
    const int button_state_D5=digitalRead(PIN_D5);
    const int button_state_D6=digitalRead(PIN_D6);
    const int button_state_D7=digitalRead(PIN_D7);
    const int button_state_D8=digitalRead(PIN_D8);
    const int button_state_RX=digitalRead(PIN_RX);

    if (button_state_D0 == 0){
      this->array_notes[i] = NOTE_C4; 
      tone(PIN_BUZZER, this->array_notes[i], 10);
    }   
    if (button_state_D1 == 0){
      this->array_notes[i] = NOTE_D4; 
      tone(PIN_BUZZER, this->array_notes[i], 10);
    }   
    if (button_state_D2 == 0){
      this->array_notes[i] = NOTE_E4; 
      tone(PIN_BUZZER, this->array_notes[i], 10);
    }   
//    if (button_state_D3 == 0){
//      this->array_notes[i] = NOTE_F4; 
//      tone(PIN_BUZZER, this->array_notes[i], 10);
//    }

    if (button_state_D5 == 0){
      this->array_notes[i] = NOTE_G4; 
      tone(PIN_BUZZER, this->array_notes[i], 10);
    }
    if (button_state_D6 == 0){
      this->array_notes[i] = NOTE_A4; 
      tone(PIN_BUZZER, this->array_notes[i], 10);
    }

    if (button_state_D7 == 0){
        this->array_notes[i] = NOTE_AS4; 
        tone(PIN_BUZZER, this->array_notes[i], 10);
    }
    if (button_state_D8 == 0){
        this->array_notes[i] = NOTE_C5; 
        tone(PIN_BUZZER, this->array_notes[i], 10);
    }
    
    delay(10);
    
  }
  digitalWrite(LED_BUILTIN,1);
  
}


//void Melody::add_note(Note n) {
//	l_notes.push_back(n);
//}
//
//list<Note> Melody::get_list(void){
//  return this->l_notes;
//}

int* Melody::get_array_notes(){
  return this->array_notes;
  }
