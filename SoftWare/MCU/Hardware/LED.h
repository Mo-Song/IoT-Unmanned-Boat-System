#ifndef __LED_H
#define __LED_H

#define LED1_PIN GPIO_Pin_8
#define LED2_PIN GPIO_Pin_9
#define LED1_PORT GPIOB
#define LED2_PORT GPIOB
#define LED_RCC RCC_APB2Periph_GPIOB

void LED_Init(void);
void LED1_ON(void);
void LED1_OFF(void);
void LED1_Turn(void);
void LED2_ON(void);
void LED2_OFF(void);
void LED2_Turn(void);

#endif
