#ifndef BUZZER_H
#define BUZZER_H
#include"device.h"

class Buzzer: public Device{
  public:
    Buzzer();
    Buzzer(int pin, int pin_mode);
    void setup_device();
    void play_tone(int note, int note_length);
  private:
    int pin;
    int pin_mode;
};

#endif
