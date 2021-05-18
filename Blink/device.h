#ifndef DEVICE_H
#define DEVICE_H

#include <Arduino.h>

// Parent class of hardware devices
class Device {
  public:
  	virtual void setup_device() = 0;
  protected:
    // Indicates if the device is initialized
    bool initialized;

};

#endif
