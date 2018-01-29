#ifndef GLOBAL_H
#define GLOBAL_H

#include "mbed.h"
#include "USBSerial.h"

extern DigitalOut myLED1;
extern DigitalOut myLED2;
extern DigitalOut myLED3;
extern DigitalOut myLED4;
extern DigitalOut boardLED;

extern USBSerial serialNUC;

extern const double wheelCircum;
extern const double gearRatio;
extern const int ticksPerRev;
extern const double metersPerTick;


#endif