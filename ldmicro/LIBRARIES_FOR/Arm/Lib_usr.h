/**
 * STD Library for STM32F4xx devices
 */

#ifndef STD_H
#define STD_H 120

#include "stm32f4xx.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_gpio.h"

// standard functions to implement in C

uint16_t swap(uint16_t var);
int16_t opposite(int16_t var);


uint8_t bcd2bin(uint8_t var);
uint8_t bin2bcd(uint8_t var);


void delay_us(uint16_t us);
void delay_ms(uint16_t ms);


#endif
