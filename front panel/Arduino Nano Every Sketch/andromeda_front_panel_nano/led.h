/////////////////////////////////////////////////////////////////////////
//
// Andromeda front panel controller by Laurence Barker G8NJJ
//
// this sketch provides a knob and switch interface through USB and CAT
//
// LED.h
// this file holds the code to control 8 LED indicators
/////////////////////////////////////////////////////////////////////////

#ifndef __LED_H
#define __LED_H
#include <Arduino.h>


// declare extern variables
extern byte I2CLEDBits;                  // 3 bits data for LEDs, in bits 2:0


//
// set an LED to a particular state
// LED number 0 to (N-1)
//
void SetLED(byte LEDNumber, bool State);


//
// clear all LEDs
//
void ClearLEDs(void);


#endif //#ifndef
