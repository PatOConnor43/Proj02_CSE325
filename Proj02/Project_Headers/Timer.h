/*
 * Timer.h
 *
 *  Created on: Feb 8, 2015
 *      Author: Vishal
 */

#ifndef TIMER_H_
#define TIMER_H_

#include "support_common.h" /* include peripheral declarations and more */


void dtim0_init();

/***************************************************************************************************************
// FUNCTION: timerDelay()
//
// DESCRIPTION
// Delay the system for the specified number of microseconds
//*************************************************************************************************************/
void timerDelay(long time);



#endif /* TIMER_H_ */
