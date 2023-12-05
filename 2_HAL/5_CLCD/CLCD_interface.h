/****************************************************************/
/****************************************************************/
/**************   Author: Youssef  Ahmed	*********************/
/**************   Layer: HAL				*********************/
/**************   SWC: CLCD					*********************/
/**************   Version: 1.00				*********************/
/**************   Date: 11/23				*********************/
/****************************************************************/
/****************************************************************/

#ifndef CLCD_INTERFACE_H_
#define CLCD_INTERFACE_H_
#include "STD_TYPES.h"

#define clcd_Clear           	 0x01          // replace all characters with ASCII 'space'
#define clcd_Home            	 0x02          // return cursor to first position on first line
#define clcd_EntryMode      	 0x06          // shift cursor from left to right on read/write
#define clcd_DisplayOff     	 0x08          // turn display off
#define clcd_DisplayOn      	 0x0C 		   // display on, cursor off, don't blink character
#define clcd_Display_CursorOn 	 0x0E		   // display on, cursor on, don't blink character
#define clcd_FunctionReset  	 0x30          // reset the LCD
#define clcd_FunctionSet8bit 	 0x38          // 8-bit data, 2-line display, 5 x 7 font
#define clcd_SetCursor      	 0x80          // set cursor position (First address of DDRAM)
#define clcd_CGRAM				 0x40		   // set AC at first address of CGRam

void CLCD_voidSendCommand(u8 Copy_u8Command);


void CLCD_voidSendData(u8 Copy_u8Data);

void CLCD_Init(void);

void CLCD_SendPosition(u8 Copy_u8Row,u8 Copy_u8Col);

void CLCD_SendString(const u8 *Copy_u8ptString);

void CLCD_WriteSpecialCharacter(u8 Copy_u8Row,u8 Copy_u8Col);










#endif
