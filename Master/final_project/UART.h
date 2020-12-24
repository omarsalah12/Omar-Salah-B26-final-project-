/*
 * UART.h
 *
 * Created: 12/14/20 11:17:41 PM
 *  Author: user
 */ 


#ifndef UART_H_
#define UART_H_
#include "ATmega32_registers.h"
#include "Bit_Math.h"


void UART_init(void);
void UART_TX(uint8 data);
uint8 UART_RX(void);
void UART_TXsting(uint8* data);



#endif /* UART_H_ */