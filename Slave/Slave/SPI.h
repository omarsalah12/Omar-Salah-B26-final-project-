/*
 * SPI.h
 *
 * Created: 12/17/20 1:31:52 AM
 *  Author: user
 */ 


#ifndef SPI_H_
#define SPI_H_
#include "ATmega32_registers.h"
#include "Bit_Math.h"

void SPI_Master_init(void);
void SPI_Slave_init(void);
void SPI_Master_init_Trans(void);
void SPI_Master_ter_Trans(void);
uint8 SPI_Transiver(uint8 data);




#endif /* SPI_H_ */