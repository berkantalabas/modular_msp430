#include <msp430.h>				
#include "led_init.h"
#include "led_toggle.h"
#include "delay.h"
//this program was written to demonstrate modular programming

// delay
//led init
//toggle

/**
 * blink.c
 */
void main(void)
{
	led_config();

	while(1)
	{
	    led_toggle();
	    delay_function();
	}
}
