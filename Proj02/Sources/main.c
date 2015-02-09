/*
 * main implementation: use this sample to create your own application
 *
 */


//#include "support_common.h" /* include peripheral declarations and more */
#include "Lights.h"
#include "Timer.h"
#include "RNG.h"
#include "Dipsw.h"
#include "PButt.h"

#if (CONSOLE_IO_SUPPORT || ENALBLE_UART_SUPPORT)
	#include <stdio.h> // TODO: Remove?
#endif

unsigned int isWinner(unsigned int pressedState, unsigned int winState);

int main(void)
{
	int delay = 800000;	// Initial delay
	unsigned int rand = randomLED();
	unsigned int i;
	
	// Program Port TC Pin Assignment Register (PTCPAR) so pins 0, 1, 2, and 3 are configured for the general-
	// purpose I/O (GPIO) function.
	MCF_GPIO_PTCPAR = MCF_GPIO_PTCPAR_PTCPAR0(MCF_GPIO_PTCPAR_DTIN0_GPIO) |
						MCF_GPIO_PTCPAR_PTCPAR1(MCF_GPIO_PTCPAR_DTIN1_GPIO) |
						MCF_GPIO_PTCPAR_PTCPAR1(MCF_GPIO_PTCPAR_DTIN2_GPIO) |
						MCF_GPIO_PTCPAR_PTCPAR1(MCF_GPIO_PTCPAR_DTIN3_GPIO);
	
	// Program Port TC Data Direction Register (DDRTC) so pins 0, 1, 2, and 3 are configured as output pins.
	MCF_GPIO_DDRTC = MCF_GPIO_DDRTC_DDRTC0 |
						MCF_GPIO_DDRTC_DDRTC1 |
						MCF_GPIO_DDRTC_DDRTC2 |
						MCF_GPIO_DDRTC_DDRTC3;
	
	// Initialize timer
	dtim0_init();
	
	// Turn off all LED's.
	LED(0);
	winAnimation();	// Game has started
	for(;;)
	{
		if(getDipState()) // Linear game
		{
			i = rand;
			PButtPressed = getButtonState();
			while(!PButtPressed)
			{
				LED(i);
				//i++;
				i = (i % 4) + 1;
				timerDelay(delay);
				PButtPressed = getButtonState();
			}
			
			if(isWinner(i, rand))
			{
				winAnimation();
				delay *= .90;
			}
			else
			{
				loseAnimation();
				delay = 800000;
			}
		}
		else	// random game
		{
			i = rand;
			PButtPressed = getButtonState();
			while(!PButtPressed)
			{
				LED(i);
				//i++;
				i = randomLED();
				timerDelay(delay);
				PButtPressed = getButtonState();
			}
			
			if(isWinner(i, rand))
			{
				winAnimation();
				delay *= .90;
			}
			else
			{
				loseAnimation();
				delay = 800000;
			}
		}
		
		rand = randomLED();	// Generate a new random number
	}
	
//#if (CONSOLE_IO_SUPPORT || ENABLE_UART_SUPPORT)
//	printf("%d", randomLED(i));
//#endif
}


unsigned int isWinner(unsigned int pressedState, unsigned int winState)
{
	--pressedState;
	if(pressedState == winState)
		return 1;
	else
		return 0;
}
