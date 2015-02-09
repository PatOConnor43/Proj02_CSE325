/*
 * main implementation: use this sample to create your own application
 *
 */


//#include "support_common.h" /* include peripheral declarations and more */
#include "Lights.h"
#if (CONSOLE_IO_SUPPORT || ENALBLE_UART_SUPPORT)
	#include <stdio.h> // TODO: Remove?
#endif

int main(void)
{
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
	
	// Turn off all LED's.
	led_off(1); led_off(2); led_off(3); led_off(4);
	
	led_on(2);
#if (CONSOLE_IO_SUPPORT || ENABLE_UART_SUPPORT)
	printf("%d", randomLED());
#endif
}
