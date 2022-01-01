/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef ATMEL_START_PINS_H_INCLUDED
#define ATMEL_START_PINS_H_INCLUDED

#include <hal_gpio.h>

// SAMD20 has 8 pin functions

#define GPIO_PIN_FUNCTION_A 0
#define GPIO_PIN_FUNCTION_B 1
#define GPIO_PIN_FUNCTION_C 2
#define GPIO_PIN_FUNCTION_D 3
#define GPIO_PIN_FUNCTION_E 4
#define GPIO_PIN_FUNCTION_F 5
#define GPIO_PIN_FUNCTION_G 6
#define GPIO_PIN_FUNCTION_H 7

#define CURRENT GPIO(GPIO_PORTA, 2)
#define EXT_POWER_PLUGGED GPIO(GPIO_PORTA, 3)
#define USER1 GPIO(GPIO_PORTA, 4)
#define USER2 GPIO(GPIO_PORTA, 5)
#define PA08 GPIO(GPIO_PORTA, 8)
#define PA09 GPIO(GPIO_PORTA, 9)
#define nALERT GPIO(GPIO_PORTA, 11)
#define I2C_PW_FAULT GPIO(GPIO_PORTA, 14)
#define I2C_PW_EN GPIO(GPIO_PORTA, 15)
#define PA16 GPIO(GPIO_PORTA, 16)
#define PA17 GPIO(GPIO_PORTA, 17)
#define ENABLE_VBAT_POWER GPIO(GPIO_PORTA, 18)
#define ENABLE_5V_POWER GPIO(GPIO_PORTA, 19)
#define EN_12V GPIO(GPIO_PORTA, 22)
#define EN_5V GPIO(GPIO_PORTA, 23)

#endif // ATMEL_START_PINS_H_INCLUDED
