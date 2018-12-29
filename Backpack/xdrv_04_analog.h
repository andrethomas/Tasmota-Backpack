#ifndef __xdrv_04_analog_h__
#define __xdrv_04_analog_h__

#include <Arduino.h>

void Analog_Config(void);
uint8_t Analog_Read(uint8_t pin);
void Analog_CallBack(void);

#endif // __xdrv_04_analog_h__
