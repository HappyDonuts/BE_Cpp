#ifndef MELODY_H
#define MELODY_H

#include "note.h"
#include <list>
using namespace std;

class Melody {
  public:
  	Melody();
    int* get_array_notes();
  	//void add_note(Note n);
    //list<Note> get_list(void);
    
  private:
  	int* array_notes; //metronome
};

#endif
