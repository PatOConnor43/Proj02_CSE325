/*
 * Dipsw.c
 *
 *  Created on: Feb 8, 2015
 *      Author: paoconno
 */

#include "Dipsw.h"

int getDipState(){
	
	DipState = (MCF_GPIO_SETDD & 0x10)/16; //Mask SETDD so DipState is only 1 if first bit is 1
	return DipState;
}

void initDip(){
	MCF_GPIO_PDDPAR = 0x00; // Set primary function GPIO
	MCF_GPIO_DDRDD = 0x00;  // Set the direction of this switch as input
	DipState = (MCF_GPIO_SETDD & 0x10)/16; //Mask SETDD so DipState is only 1 if first bit is 1
	
}
