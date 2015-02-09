/*
 * Lights.c
 *
 *  Created on: Feb 8, 2015
 *      Author: Vishal
 */

#include "Lights.h"

void led_off(int p_led)
{
	MCF_GPIO_CLRTC = (uint8)(~(1 << (p_led - 1)));
}

void led_on(int p_led)
{
	MCF_GPIO_SETTC = (uint8)(1 << (p_led - 1));
}

void winAnimation()
{
	int i;
	for(i = 0; i < 4; i++)
	{
		// Turn on all LED.
		led_on(1); led_on(2); led_on(3); led_on(4);
		
		// TODO: Add Timer Delay
		
		// Turn off all LEDs
		led_off(1); led_off(2); led_off(3); led_off(4);
		
		// TODO: Add Timer Delay
	}
}

void loseAnimation()
{
	// Turn on all LED.
	led_on(1); led_on(2); led_on(3); led_on(4);
	
	// Turn off each LED consecutively
	// TODO: Add Timer Delay
	led_off(4);
	// TODO: Add Timer Delay
	led_off(3);
	// TODO: Add Timer Delay
	led_off(2);
	// TODO: Add Timer Delay
	led_off(1);
	
	// TODO: Add Timer Delay ?
}

unsigned int randomLED()
{
	MCF_RNGA_RNGCR = 0x00;	// Reset
	
	MCF_RNGA_RNGCR |= 0x00; // Set mask, high assurance and GO bits
	
	// TODO: Determine if timer needs to be added
	
	if(MCF_RNGA_RNGSR & 0x0100)
		return (MCF_RNGA_RNGOUT & 0x03) + 1;
	
	return  MCF_RNGA_RNGOUT;	// Restrict the domain of the number
}
