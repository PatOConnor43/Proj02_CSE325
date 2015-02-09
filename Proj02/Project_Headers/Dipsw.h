/*
 * Dipsw.h
 *
 *  Created on: Feb 8, 2015
 *      Author: paoconno
 */

#ifndef DIPSW_H_
#define DIPSW_H_

#include "support_common.h" /* include peripheral declarations and more */

static int DipState;

void initDip();
int getDipState();

#endif /* DIPSW_H_ */
