#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "Serial.h"
#include "LED.h"

int main(void)
{
	Serial_Init();
	while (1)
	{
		Serial_Printf("Hello World!\r\n");
        Delay_ms(1000);
	}
}
