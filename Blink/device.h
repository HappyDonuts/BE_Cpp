#ifndef DEVICE_H
#define DEVICE_H

#include <Arduino.h>

// Parent class of hardware devices
class Device {
  public:
  	void setup_device();
  protected:
    // Indicates if the device is initialized
    bool initialized;

};

#endif
