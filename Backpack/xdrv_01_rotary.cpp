#include <Arduino.h>
#include <Wire.h>
#include "x_config.h"
#include "x_global_vars.h"
#include "xdrv_01_rotary.h"

volatile int counter = 0;
uint8_t encoder_value = 0;
uint8_t encoder_value_prev = 0;

#define readA bitRead(PIND,PD2) // Faster to read this way than digitalRead();
#define readB bitRead(PIND,PD3) // Faster to read this way than digitalRead();

void Encoder_Config(void)
{
  pinMode(ENCODER_PIN_A, INPUT_PULLUP);
  pinMode(ENCODER_PIN_B, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(ENCODER_PIN_A), isrA, FALLING);
  attachInterrupt(digitalPinToInterrupt(ENCODER_PIN_A), isrB, FALLING);
}

void Encoder_CallBack(void)
{
  noInterrupts();
  encoder_value = counter;
  interrupts();
  encoder_value_prev = encoder_value;
}

void Rotary_SendValue(void)
{
  Wire.write(encoder_value);
}

void isrA(void)
{
  if(readB != readA) {
    counter ++;
  } else {
    counter --;
  }
  if (counter < 0) counter=0;
  if (counter > 100) counter=100;
}

void isrB(void)
{
  if (readA == readB) {
    counter ++;
  } else {
    counter --;
  }
  if (counter < 0) counter=0;
  if (counter > 100) counter=100;
}
