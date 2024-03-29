/*
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <joerg@FreeBSD.ORG> wrote this file.  As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer in return.        Joerg Wunsch
 * ----------------------------------------------------------------------------
 *
 * Stdio demo, upper layer of LCD driver.
 *
 * $Id: lcd.h,v 1.1 2005/12/28 21:38:59 joerg_wunsch Exp $
 */
#ifndef LCD_H_
#define LCD_H_
#include <stdio.h>
#include "portmacro.h"

extern FILE lcd_str;
/*
 * Initialize LCD controller.  Performs a software reset.
 */
void vInitLCD(void);

/*
 * Send one character to the LCD.
 */
portSHORT xPutCharLCD(portCHAR c, FILE *stream);

portBASE_TYPE xTakeLCD( portTickType xBlockTime );

portBASE_TYPE xGiveLCD( void );


#endif
