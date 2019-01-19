#include "2450addr.h"
#include "option.h"

void Main(void)
{	
	while(1)
	{
		int result = BUTTON_IN();
		if(result){
			LED_ON();
			DELAY(0x3FFFF);
		}
		LED_OFF();
	}		
}
