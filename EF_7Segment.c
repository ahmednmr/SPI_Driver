/***************************************************************
 *  Source File: EF_7Segment.c
 *
 *  Description: This simple driver for 7-Segment .
 *
 *  History:     Version 1.0  - INIT Version
 *  Date   :     25/08/2014
 *  -------------------------------------------------------
 *  Author :         
 *
 *  Copyright (c) EmbeddedFab, 2014
 *
 *  This unpublished material is proprietary to EmbeddedFab.
 *  All rights reserved. The methods and techniques described
 *  herein are considered trade secrets and/or confidential.
 *  Reproduction or distribution, in whole or in part, is
 *  forbidden except by express written permission of
 *  EmbeddedFab.
 **************************************************************/

#include "EF_7Segment.h"

/*********************************************************************
* Function    : void Segment_Init (void);
*
* DESCRIPTION : This function used to Initialize 7-Segment
*
* PARAMETERS  : void
*            
*
* Return Value: Void
***********************************************************************/
void Segment_Init (void)
{
    
	DDRB |=0x0f;
	DDRC |=0x0c;
	DDRC |=(1<<FIRST_SEGMENT_ENABLE);
	DDRC |=(1<<SECOND_SEGMENT_ENABLE);

}


/*********************************************************************
* Function    : Segment_Display(U8_t SegmentNumber);
*
* DESCRIPTION : This function used to Initialize 7-Segment
*
* PARAMETERS  : U8_t SegmentNumber : Number in range 0 to 99
*            
*
* Return Value: Void
***********************************************************************/
void Segment_Display(char SegmentNumber)
{
    char UnitsDigit = 0;
	char TensDigit  = 0;

    UnitsDigit = SegmentNumber % 10;
    TensDigit  = SegmentNumber/10;

    PORTC |=(1<<FIRST_SEGMENT_ENABLE);
    PORTC &=~(1<<SECOND_SEGMENT_ENABLE);
    PORTB=UnitsDigit;
//    _delay_ms (5);
//	if(TensDigit != 0)
//	{
//
//		PORTC |=(1<<SECOND_SEGMENT_ENABLE);
//		    PORTC &=~(1<<FIRST_SEGMENT_ENABLE);
//		    PORTB=TensDigit;
//
//	    _delay_ms (5);
//    }
}
