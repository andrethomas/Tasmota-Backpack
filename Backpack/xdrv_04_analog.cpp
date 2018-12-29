#include <Arduino.h>
#include "x_config.h"
#include "xdrv_04_analog.h"

void Analog_Config(void)
{
  pinMode(ANALOG1,INPUT);
  pinMode(ANALOG2,INPUT);
}

uint8_t Analog_Read(uint8_t pin)
{
  switch (pin) {
    case 1:
      return analogRead(ANALOG1);
      break;
    case 2:
      return analogRead(ANALOG2);
      break;
    default:
      return 0;
      break;
  }
}

void Analog_CallBack(void)
{
  
}

