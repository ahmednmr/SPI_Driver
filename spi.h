/*
 * spi.h
 *
 *  Created on: Apr 14, 2019
 *      Author: Think
 */

#ifndef SPI_H_
#define SPI_H_

#include <avr/io.h>


#define DDR_SPI	DDRB
#define DD_SS	PINB4   //4
#define DD_MOSI	PINB5  //5
#define DD_MISO	PINB6   //6
#define DD_SCK	PINB7   //7

void SPI_MasterInit(void);
char SPI_Transmit(char cData);
void SPI_SlaveInit(void);


#endif /* SPI_H_ */
