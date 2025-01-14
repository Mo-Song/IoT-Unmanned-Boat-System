#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "Key.h"
#include "Serial.h"
#include "LED.h"

int main(void)
{

	/*模块初始化*/
	OLED_Init();		//OLED初始化
	Key_Init();			//按键初始化
	LED_Init();			//LED初始化
	Serial_Init();

	while (1)
	{
		
	}
}
