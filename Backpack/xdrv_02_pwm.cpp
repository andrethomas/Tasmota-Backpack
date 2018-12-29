#include <Arduino.h>
#include "x_config.h"
#include "xdrv_02_pwm.h"

void PWM_Config(void)
{
  pinMode(PWM1,OUTPUT);
  pinMode(PWM2,OUTPUT);
  analogWrite(PWM1,0);
  analogWrite(PWM2,0);
}

void PWM_Set(uint8_t pin, uint8_t value)
{
  switch (pin) {
    case 1:
      analogWrite(PWM1,value);
      break;
    case 2:
      analogWrite(PWM2,value);
      break;
    default:
      break;
  }
}

void PWM_CallBack(void)
{
  
}

