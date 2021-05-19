#ifndef MELODY_H
#define MELODY_H
#include "button.h"
#include "buzzer.h"
#include "led.h"
#include "Pin_gpio.h"
#include "Note_frequency.h"

#define MELODY_LENGTH 1000
#define NOTE_LENGTH 10

class Melody {
  public:
  	Melody();
    int* get_array_notes();
    static void play_all_melodies(Melody mel_1, Melody mel_2, Buzzer* tab_buzzers);
    void record_melody(Melody mel_2, Button* tab_buttons, Buzzer* tab_buzzers);
    void create_metronome(); 

    int & operator[] (const int i);
    
  private:
  	int* array_notes;
};

#endif
