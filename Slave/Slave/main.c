/*
 * Slave.c
 *
 * Created: 12/21/20 7:04:03 PM
 * Author : user
 */ 

#include "SPI.h"
#define  F_CPU 8000000
#include <util/delay.h>
#include "DIO.h"

int main(void)
{
	/* Replace with your application code */
	uint8 Tx =3;
	uint8 rec=0;
	//Actuator 1
	DIO_SetPinDir(DIO_PORTD,DIO_PIN3,DIO_PIN_OUTPUT);
	//Actuator 2
	DIO_SetPinDir(DIO_PORTC,DIO_PIN2,DIO_PIN_OUTPUT);

	SPI_Slave_init();
	
	
	while (1)
	{
		rec=SPI_Transiver(Tx);
		
		if(rec=='1'){
		DIO_SetPinVal(DIO_PORTD,DIO_PIN3,DIO_PIN_HIGH);
		DIO_SetPinVal(DIO_PORTC,DIO_PIN2,DIO_PIN_HIGH);
		
		}
		if(rec=='2'){
			DIO_SetPinVal(DIO_PORTD,DIO_PIN3,DIO_PIN_LOW);
			DIO_SetPinVal(DIO_PORTC,DIO_PIN2,DIO_PIN_LOW);
			rec=0;
			
		}
		_delay_ms(1000);
		
	}}

