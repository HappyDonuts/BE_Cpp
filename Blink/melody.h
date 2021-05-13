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
    void setup_melody();
    static void play_all_melodies(Melody mel_1, Melody mel_2, Buzzer* tab_buzzers);//, Led led_melody); //on peut creer un tab de 2 *  melodies et le psser en arg après au lieu de passer 2 melodies
    void record_melody(Melody mel_2, Button* tab_buttons, Buzzer* tab_buzzers);//, Led led_countdown, Led led_melody);
    void create_metronome(); 
    
  private:
  	int* array_notes;
};

#endif
