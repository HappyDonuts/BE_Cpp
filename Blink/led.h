#ifndef LED_H
#define LED_H
#include "device.h"

class Led : public Device{
  public:
    Led(int pin, int pin_mode);
    void setup_device();
    void set_led(int state);
  private:
    int pin;
    int pin_mode;
};

#endif
