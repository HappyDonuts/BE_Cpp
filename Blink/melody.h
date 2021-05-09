#ifndef MELODY_H
#define MELODY_H

#include "Pin_gpio.h"
#include "Note_frequency.h"

#define LENGTH 1000

class Melody {
  public:
  	Melody();
    int* get_array_notes();
    void setup_melody();
    void play_both_melodies(Melody mel_2);
    void record_melody(Melody mel_2);
    void create_metronome(); 
    
  private:
  	int* array_notes;
};

#endif
