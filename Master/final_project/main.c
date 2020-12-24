/*
 * final_project.c
 *
 * Created: 12/21/20 5:57:17 PM
 * Author : user
 */ 

#include "SPI.h"
#define  F_CPU 8000000
#include <util/delay.h>
#include "DIO.h"
#include "UART.h"
int main(void)
{
	/* Replace with your application code */
	uint8 Tx =1;
	uint8 rec=0;
	uint8 bt=0;
    UART_init();
	SPI_Master_init();
	SPI_Master_init_Trans();
	_delay_ms(1000);
	

	while (1)
	{   
		 bt=UART_RX();//receiving data from bluetooth via UART
		rec=SPI_Transiver(bt);//sending data to slave

			
		
		
		_delay_ms(1000);
	}
}
