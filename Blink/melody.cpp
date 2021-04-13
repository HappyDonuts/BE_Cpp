#include "melody.h"

Melody::Melody(){
}

void Melody::add_note(Note n) {
	l_notes.push_back(n);
}

list<Note> Melody::get_list(void){
  return this->l_notes;
}
