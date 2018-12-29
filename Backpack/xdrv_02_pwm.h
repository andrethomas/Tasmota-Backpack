#ifndef __xdrv_02_pwm_h__
#define __xdrv_02_pwm_h__

#include <Arduino.h>
#include "x_config.h"

void PWM_Config(void);
void PWM_Set(uint8_t pin, uint8_t value);
void PWM_CallBack(void);

#endif // __xdrv_02_pwm_h__
