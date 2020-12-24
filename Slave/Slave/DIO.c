/*
 * DIO.c
 *
 * Created: 11/4/20 10:14:06 PM
 *  Author: user
 */ 
#include "DIO.h"

void DIO_SetPortDir(uint8 Port, uint8 Dir){
	
	switch(Port){
		case DIO_PORTA :
		DDRA=Dir;
		break;
		
		case DIO_PORTB :
		DDRB=Dir;
		break;
		
		case DIO_PORTC :
		DDRC=Dir;
		break;
		
		case DIO_PORTD :
		DDRC=Dir;
		break;
		
		
		default:
		break;
		
		
		
	}
	
	
	
}
void DIO_SetPinDir(uint8 Port,uint8 Pin, uint8 Dir){
	switch(Dir){
		case DIO_PIN_OUTPUT:
		switch(Port){
			case DIO_PORTA:
			set_bit(DDRA,Pin);
			break;
			case DIO_PORTB:
			set_bit(DDRB,Pin);
			break;
			case DIO_PORTC:
			set_bit(DDRC,Pin);
			
			break;
			case DIO_PORTD:
			set_bit(DDRD,Pin);
			
			break;
			default:
			break;
		}
		break;
		
		
		case DIO_PORT_INPUT:
			switch(Port){
				case DIO_PORTA:
				clear_bit(DDRA,Pin);
				break;
				case DIO_PORTB:
				clear_bit(DDRB,Pin);
				break;
				case DIO_PORTC:
				clear_bit(DDRC,Pin);
				
				break;
				case DIO_PORTD:
				clear_bit(DDRD,Pin);
				
				break;
				default:
				break;
			}
			
		default:
		break;
	}
}


void DIO_SetPortVal(uint8 Port, uint8 Val){
	switch(Port){
		case DIO_PORTA :
		PORTA=Val;
		break;
		
		case DIO_PORTB :
		PORTB=Val;
		break;
		
		case DIO_PORTC :
		PORTC=Val;
		break;
		
		case DIO_PORTD :
		PORTD=Val;
		break;
		
		
		default:
		break;
		
		
		
	}
	
	
}
void DIO_SetPinVal(uint8 Port,uint8 Pin, uint8 Val){
		switch(Val){
			case DIO_PIN_HIGH:
			switch(Port){
				case DIO_PORTA:
				set_bit(PORTA,Pin);
				break;
				case DIO_PORTB:
				set_bit(PORTB,Pin);
				break;
				case DIO_PORTC:
				set_bit(PORTC,Pin);
				
				break;
				case DIO_PORTD:
				set_bit(PORTD,Pin);
				
				break;
				default:
				break;
			}
			break;
			
			
			case DIO_PORT_LOW:
			switch(Port){
				case DIO_PORTA:
				clear_bit(PORTA,Pin);
				break;
				case DIO_PORTB:
				clear_bit(PORTB,Pin);
				break;
				case DIO_PORTC:
				clear_bit(PORTC,Pin);
				
				break;
				case DIO_PORTD:
				clear_bit(PORTD,Pin);
				
				break;
				default:
				break;
			}
			
			default:
			break;
		}
	
	
	
	
}


void DIO_ReadPort(uint8 Port, uint8* Val){
		switch(Port){
			case DIO_PORTA :
			*Val=PORTA;
			break;
			
			case DIO_PORTB :
			*Val=PORTB;
			break;
			
			case DIO_PORTC :
			*Val=PORTC;
			break;
			
			case DIO_PORTD :
			*Val=PORTD;
			break;
			
			
			default:
			break;
		}
}
void DIO_ReadPin(uint8 Port,uint8 Pin, uint8* Val){
	
			switch(Port){
				case DIO_PORTA :
				*Val=Get_bit(PINA,Pin);
				break;
				
				case DIO_PORTB :
				*Val=Get_bit(PINB,Pin);
				break;
				
				case DIO_PORTC :
				*Val=Get_bit(PINC,Pin);
				break;
				
				case DIO_PORTD :
				*Val=Get_bit(PIND,Pin);
				break;
				
				
				default:
				break;}
	
}
void DIO_togglePin(uint8 Port,uint8 Pin ){
	
	switch(Port){
				case DIO_PORTA:
				tog_bit(PORTA,Pin);
				break;
				case DIO_PORTB:
				tog_bit(PORTB,Pin);
				break;
				case DIO_PORTC:
				tog_bit(PORTC,Pin);
				
				break;
				case DIO_PORTD:
				tog_bit(PORTD,Pin);
				
				break;
				
				default:
				break;
		
		
	}
}


