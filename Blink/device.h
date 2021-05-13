#ifndef DEVICE_H
#define DEVICE_H

#include <Arduino.h>

class Device {
  public:
  	void setup_device();
  protected:
    bool initialized;

};

#endif
