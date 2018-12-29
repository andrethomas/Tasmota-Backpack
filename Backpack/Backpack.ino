#include <Wire.h>
#include "x_config.h"
#include "xdrv_01_rotary.h"
#include "xdrv_02_pwm.h"
#include "xdrv_03_output.h"
#include "xdrv_04_analog.h"

void setup() {
  Output_Config();
  PWM_Config();
  Analog_Config();
  Encoder_Config();

  Wire.begin(I2C_ADDRESS);
  Wire.onRequest(requestEvent);
  Wire.onReceive(receiveEvent);
}

void loop() {
  Encoder_CallBack();
  PWM_CallBack();
  Output_CallBack();
  Analog_CallBack();
}

void receiveEvent(int bytesReceived)
{
}

void SendSignature(void)
{
  Wire.write(I2C_ID);
}

void requestEvent() {
  uint8_t reg = Wire.read();
    switch (reg) {
      case I2C_SIGNATURE:
        SendSignature();
        break;
      case I2C_ROTARY_VALUE:
        Rotary_SendValue();
        break;
    }
}

