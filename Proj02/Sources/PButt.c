/*
 * PButt.c
 *
 *  Created on: Feb 8, 2015
 *      Author: paoconno
 */
#include "PButt.h"

void initButton(){
	MCF_GPIO_PTAPAR = 0x00; //Set function as GPIO
	MCF_GPIO_DDRTA = 0;		//Set direction as input
	PButtPressed = 0;		//Set variable that keeps track of it as 0
	
}

int getButtonState(){
	PButtPressed = !((MCF_GPIO_SETTA & 0x7)/7); //SETTA is 0x7 when not pressed, 0x6 when it is pressed
	return PButtPressed;	
	
}
