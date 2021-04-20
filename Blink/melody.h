#ifndef MELODY_H
#define MELODY_H

#include "Pin_gpio.h"
#include "Note_frequency.h"

#define LENGTH 1000

class Melody {
  public:
  	Melody();
    int* get_array_notes();
    void play_melody();
    void record_melody();
    void create_metronome();
    
  private:
  	int* array_notes; //metronome
};

#endif
