#include "delay.h"
#include "usart.h"
int main(void)
{
	u8 t=0;
	delay_init();
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	uart_init(115200);
	while(1)
	{
		printf("t:%d\n",t);
		delay_ms(500);
		t++;
		/////////
		//////////
		////////////
	}
}
