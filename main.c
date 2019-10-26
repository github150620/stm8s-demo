/*  
 * 
 */

#include "stm8s003f.h"

@far @interrupt void EXTI_PORTA_IRQHandler(void)
{
	PB_ODR ^= 1<<5;
}

@far @interrupt void UART1_RCV_IRQHandler(void)
{
	unsigned char u;
	u = UART1_DR;
	if (u == 'A') {
		PB_ODR &= ~0x20;
	} else {
		PB_ODR |= 0x20;
	}
}

@far @interrupt void TIM4_UPD_OVF_IRQHandler(void)
{
	static int cnt = -1;
	cnt++;

	TIM4_SR = 0x00;
	if (cnt > 61) { // 16.32ms * 61 = 0.99552s
		cnt = 0;
		PB_ODR ^= 1<<5;
	}
}

void GPIO_init(void)
{
	// PA1 = 0x02, Key
	PA_DDR &= ~0x02; // input
	PA_CR1 |= 0x02;  // pull-up
	PA_CR2 |= 0x02;  // interrupt

	// PB5 = 0x20, TEST LED
	PB_DDR |= 0x20; // output
	PB_CR1 |= 0x20; // push-pull
	PB_CR2 |= 0x20; // fast
	PB_ODR |= 0x20; // high level
}

void UART1_init(void)
{
	// baud = 9600
	// 2MHz / 9600 = 208, 0x00D0
	UART1_BRR2 = 0x00; // Must write BRR2 first. Why?
	UART1_BRR1 = 0x0d;
	
	// Enable Receiver Interrupt  0x20
	// Enable TX                  0x08
	// Enable RX                  0x04
	UART1_CR2 = 0x2c; 
}

void TIM4_init(void)
{
	TIM4_PSCR = 7;   // 2M/2^7 = 15.625K, 15.625KHz = 0.064ms
	TIM4_ARR  = 255; // 255 * 0.064ms = 16.32ms
	TIM4_CNTR = 255;

	TIM4_IER  |= TIM4_IER_UIE;
	TIM4_CR1  |= TIM4_CR1_APRE;
}

main()
{
	GPIO_init();
	UART1_init();
	TIM4_init();

	_asm("rim");

	TIM4_CR1 |= TIM4_CR1_CEN; // Enable TIM4
	while (1) {
	}
}
