#include <msp430.h>
#include <stdio.h>
#include "delay.h"

void delay_function(void)
{
    volatile unsigned int i;
    for(i = 0;i<10000;i++);
}
