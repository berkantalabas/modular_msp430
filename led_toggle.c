/*
 * led_toggle.c
 *
 *  Created on: Apr 19, 2021
 *      Author: 90552
 */
#include <msp430.h>
#include "led_toggle.h"


void led_toggle(void)
{
   P1OUT ^= 0x01;
}


