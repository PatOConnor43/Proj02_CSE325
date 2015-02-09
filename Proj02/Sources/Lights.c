/*
 * Lights.c
 *
 *  Created on: Feb 8, 2015
 *      Author: Vishal
 */

#include "Lights.h"
#include "Timer.h"

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
		timerDelay(200000);
		
		// Turn off all LEDs
		led_off(1); led_off(2); led_off(3); led_off(4);
		
		// TODO: Add Timer Delay
		timerDelay(200000);
	}
}

void loseAnimation()
{
	// Turn on all LED.
	led_on(1); led_on(2); led_on(3); led_on(4);
	
	// Turn off each LED consecutively
	// TODO: Add Timer Delay
	timerDelay(200000);
	led_off(4);
	// TODO: Add Timer Delay
	timerDelay(200000);
	led_off(3);
	// TODO: Add Timer Delay
	timerDelay(200000);
	led_off(2);
	// TODO: Add Timer Delay
	timerDelay(200000);
	led_off(1);
	
	// TODO: Add Timer Delay ?
	timerDelay(200000);
}

void LED(int p_led)
{
	if(p_led == 0)
	{
		led_off(1); led_off(2); led_off(3); led_off(4);
	}
	
	if(p_led == 1)
		led_on(1);
	else
		led_off(1);
	
	if(p_led == 2)
		led_on(2);
	else
		led_off(2);
	
	if(p_led == 3)
		led_on(3);
	else
		led_off(3);
	
	if(p_led == 4)
		led_on(4);
	else
		led_off(4);
}
