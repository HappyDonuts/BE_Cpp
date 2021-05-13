#ifndef BUTTON_H
#define BUTTON_H
#include "device.h"

class Button : public Device{
  public:
    Button();
    Button(int pin, int pull_mode);
  	void setup_device();
    int get_button_state();
  private:
    int pin;
    int pull_mode;
};

#endif
