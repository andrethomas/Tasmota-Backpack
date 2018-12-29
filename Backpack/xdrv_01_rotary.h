#ifndef __xdrv_01_rotary_h__
#define __xdrv_01_rotary_h__

#include <Arduino.h>

void Encoder_Config(void);
void Encoder_CallBack(void);
void Rotary_SendValue(void);
void isrA(void);
void isrB(void);

#endif // __xdrv_01_rotary_h__

