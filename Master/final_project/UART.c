/*
 * UART.c
 *
 * Created: 12/4/2020 4:33:17 PM
 *  Author: M.H
 */ 


#include "UART.h"
#include "DIO.h"


#define FREQ 80000
#define Desired_Br 96
void UART_init(void){
	
	uint32 BR_Value = 0;
	
	
	DIO_SetPinDir(DIO_PORTD,DIO_PIN1,DIO_PIN_OUTPUT);
	DIO_SetPinDir(DIO_PORTD,DIO_PIN0,DIO_PIN_INPUT);

	BR_Value = ((FREQ)/(16*Desired_Br))-1;
	
	UBRRL = BR_Value;
	
	set_bit(UCSRB,3);
	set_bit(UCSRB,4);
	
	
	UCSRC = 0X86;
}

void UART_TX(uint8 data){
	UDR = data;
	
	while(Get_bit(UCSRA,5)==0);
}

void UART_TXsting(uint8* data){
	
	
	uint8 i = 0;
	
	while(data[i] != '\0'){
		UART_Tx(data[i]);
		i++;
	}
	
	
}

uint8 UART_RX(void){
	
	//when recieve check flag 
	while(Get_bit(UCSRA,7)==0);
	
	return UDR;
}
