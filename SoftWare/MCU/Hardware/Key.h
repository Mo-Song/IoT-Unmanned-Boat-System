#ifndef __KEY_H
#define __KEY_H

#define KEY1_PIN GPIO_Pin_14
#define KEY2_PIN GPIO_Pin_15
#define KEY1_PORT GPIOB
#define KEY2_PORT GPIOB
#define KEY_RCC RCC_APB2Periph_GPIOB

void Key_Init(void);
uint8_t Key_GetNum(void);

#endif
