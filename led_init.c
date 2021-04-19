#include <msp430.h>
#include "led_init.h"
void led_config(void)
{
    WDTCTL = WDTPW | WDTHOLD;       // stop watchdog timer
    P1DIR |= 0x01;        // P1.0 is adjusted as output
    P1OUT &= ~0x01;       // initially the P1.0 is closed
}



