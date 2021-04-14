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
      tone(14, this->array_notes[i], 10);
    }
    delay(10);
  }
}

void Melody::record_melody(){
  //LED vert pour start
  pinMode(12, INPUT_PULLUP);        //  Initialize button
  pinMode(13, INPUT_PULLUP);    
  pinMode(3, INPUT_PULLUP);    
  pinMode(LED_BUILTIN, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  delay(1000);
  digitalWrite(LED_BUILTIN,0);
  for (int i=0;i<LENGTH;i++){   
    const int button_state_12=digitalRead(12);
    const int button_state_13=digitalRead(13);
    const int button_state_3=digitalRead(3);

    if (button_state_12 == 0){
      this->array_notes[i] = NOTE_B4; 
      tone(14, this->array_notes[i], 10);
    }   
    if (button_state_13 == 0){
      this->array_notes[i] = NOTE_C4; 
      tone(14, this->array_notes[i], 10);
    }   

    if (button_state_3 == 0){
      this->array_notes[i] = NOTE_D4; 
      tone(14, this->array_notes[i], 10);
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
