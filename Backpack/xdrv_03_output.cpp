#include <Arduino.h>
#include "x_config.h"
#include "xdrv_03_output.h"

void Output_Config(void)
{
  pinMode(OUTPUT1,OUTPUT);
  pinMode(OUTPUT2,OUTPUT);
}

void Output_Set(uint8_t pin, uint8_t state)
{
  switch (pin) {
    case 1:
      digitalWrite(OUTPUT1,state);
      break;
    case 2:
      digitalWrite(OUTPUT2,state);
      break;
    default:
      break;
  }
}

void Output_CallBack(void)
{
  
}

