#include "LPC17xx.h"
#include "PIN_LPC17xx.h"
#include "string.h"

void usartConfigure(){
	
		PIN_Configure(0,2,1,2,0); // funkcja 1, mode 2 (brak pull up/down)
		PIN_Configure(0,3,1,2,0);
		//usart
		LPC_UART0->LCR = 3 | (1<<7);
		LPC_UART0->DLL = 27; // dzielnik peryferyjny 2, 256 max
		LPC_UART0->DLM = 0; // tu naddatek x*256
		LPC_UART0->FCR = 6;
		LPC_UART0->LCR = 3;

}

