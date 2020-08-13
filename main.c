/*
 * main.c
 *
 *  Created on: Apr 22, 2019
 *      Author: Think
 */
/*


the app




 */
#include"spi.h"
#include "EF_7Segment.h"


#define master    0
#define slave     1

#if master

int main(void) {
char x=0;

	SPI_MasterInit();

while(1)
{


	SPI_Transmit(x);
	_delay_ms(1000);
     x++;
     if(x==10)
     { x=0;  }


}



}



#endif


#if slave
int main(void) {

	char  ReceivedChar=4;

	SPI_SlaveInit();
	Segment_Init();
	Segment_Display(ReceivedChar);
	_delay_ms(1000);

	while(1)
	{
		ReceivedChar=SPI_Transmit(0);
		Segment_Display(ReceivedChar);
	}



}


#endif
