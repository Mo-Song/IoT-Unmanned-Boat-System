#ifndef __SERIAL_H
#define __SERIAL_H

#include <stdio.h>
#include "stm32f10x.h"

#define IRQ USART2_IRQn

#define UART USART2
#define UART_RCC RCC_APB1Periph_USART2

#define TX_PORT GPIOA
#define TX_PIN GPIO_Pin_2
#define TX_RCC RCC_APB2Periph_GPIOA

#define RX_PORT GPIOA
#define RX_PIN GPIO_Pin_3
#define RX_RCC RCC_APB2Periph_GPIOA

void Serial_Init(void);
void Serial_SendByte(uint8_t Byte);
void Serial_SendArray(uint8_t *Array, uint16_t Length);
void Serial_SendString(char *String);
void Serial_SendNumber(uint32_t Number, uint8_t Length);
void Serial_Printf(char *format, ...);

uint8_t Serial_GetRxFlag(void);
uint8_t Serial_GetRxData(void);

#endif
