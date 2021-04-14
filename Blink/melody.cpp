#include <Arduino.h>
#include "melody.h"

Melody::Melody(){
  array_notes = new int[1000];
  for (int i=0;i<1000;i++){
    array_notes[i] = 0;
    }
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
