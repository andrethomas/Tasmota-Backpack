#ifndef __xdrv_03_output_h__
#define __xdrv_03_output_h__

#include <Arduino.h>

void Output_Config(void);
void Output_Set(uint8_t pin, uint8_t state);
void Output_CallBack(void);

#endif // __xdrv_03_output_h__
