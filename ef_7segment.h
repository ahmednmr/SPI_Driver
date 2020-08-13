/***************************************************************
 *  Source File: EF_7Segment.c
 *
 *  Description: This simple driver for Keypad 3x3 .
 *  History:     Version 1.0  - INIT Version
 *  Date   :     25/08/2014
 *  ---------- ---------- ----------------------------
 *  Author :
 *
 * Copyright (c) EmbeddedFab, 2014
 *
 * This unpublished material is proprietary to EmbeddedFab Company.
 * All rights reserved. The methods and techniques described 
 * herein are considered trade secrets and/or confidential.
 * Reproduction or distribution, in whole or in part, 
 * is forbidden except by express written permission of EmbeddedFab.
 ****************************************************************/
#include <avr/io.h>

#define   F_CPU 8000000UL  // 8 MHz
#include <util/delay.h>

#define FIRST_SEGMENT_ENABLE    2
#define SECOND_SEGMENT_ENABLE   3


void Segment_Init   (void);
void Segment_Display(char SegmentNumber);
