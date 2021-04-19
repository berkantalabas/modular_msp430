//created by berkant alabas
//this document was created in order to explain modular programming


#include <msp430.h>				
#include "led_init.h"
#include "led_toggle.h"
#include "delay.h"

void main(void)
{
	led_config();

	while(1)
	{
	    led_toggle();
	    delay_function();
	}
}
