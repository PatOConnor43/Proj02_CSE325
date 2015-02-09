/*
 * RNG.h
 *
 *  Created on: Feb 8, 2015
 *      Author: Vishal
 */

#ifndef RNG_H_
#define RNG_H_

#include "support_common.h" /* include peripheral declarations and more */

unsigned int randomLED();

/***************************************************************************************************************
// FUNCTION: randomNumber()
//
// DESCRIPTION
// Generates a random number between 1 and 4
//*************************************************************************************************************/
unsigned int randomLED()
{
	MCF_RNGA_RNGCR = 0x00;	// Reset
	
	MCF_RNGA_RNGCR |= 0x05; // Set mask, high assurance and GO bits
	
	// TODO: Determine if timer needs to be added
	
	while(!(MCF_RNGA_RNGSR & 0x0100))
	{
		
	}
	
//	if(((MCF_RNGA_RNGOUT & 0x03) + 1) == i)
//		return randomLED(i);
	return (MCF_RNGA_RNGOUT & 0x03) + 1;	// Restrict the domain of the number
}


#endif /* RNG_H_ */
