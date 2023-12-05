/****************************************************************/
/****************************************************************/
/**************   Author: Youssef  Ahmed	*********************/
/**************   Layer: HAL				*********************/
/**************   SWC: CLCD					*********************/
/**************   Version: 1.00				*********************/
/**************   Date: 7-11/23				*********************/
/****************************************************************/
/****************************************************************/


#include "STD_TYPES.h"
#include "DIO_interface.h"
#include "CLCD_Speacialchar.h"
#include "CLCD_config.h"
#include "CLCD_private.h"
#include "CLCD_interface.h"
#include "util/delay.h"




void CLCD_voidSendCommand(u8 Copy_u8Command)
{
	/*Set Commands to Data Pins*/

	DIO_enumSetPortValue(CLCD_DATA_PORT,Copy_u8Command);

	/*Clear Rs Pin to send  command for CLCD*/

	DIO_enumSetPinValue(CLCD_CTRL_PORT,CLCD_RS_PIN,DIO_PIN_LOW);

	/*Clear Rw Pin to write */

	DIO_enumSetPinValue(CLCD_CTRL_PORT,CLCD_RW_PIN,DIO_PIN_LOW);


	/*Enable CLCD*/

	DIO_enumSetPinValue(CLCD_CTRL_PORT,CLCD_E_PIN,DIO_PIN_HIGH);
	_delay_ms(2);
	DIO_enumSetPinValue(CLCD_CTRL_PORT,CLCD_E_PIN,DIO_PIN_LOW);
}


void CLCD_voidSendData(u8 Copy_u8Data)
{
	/*Set Data to Data Pins*/

	DIO_enumSetPortValue(CLCD_DATA_PORT,Copy_u8Data);

	/*Set Rs Pin To High For  to send  Data for CLCD*/

	DIO_enumSetPinValue(CLCD_CTRL_PORT,CLCD_RS_PIN,DIO_PIN_HIGH);

	/*Clear Rw Pin to write */

	DIO_enumSetPinValue(CLCD_CTRL_PORT,CLCD_RW_PIN,DIO_PIN_LOW);


	/*Enable CLCD*/

	DIO_enumSetPinValue(CLCD_CTRL_PORT,CLCD_E_PIN,DIO_PIN_HIGH);
	_delay_ms(2);
	DIO_enumSetPinValue(CLCD_CTRL_PORT,CLCD_E_PIN,DIO_PIN_LOW);
}

void CLCD_Init(void)
{

	_delay_ms(40);

	/*Function Set 2 Lines  5*7 Font*/

	CLCD_voidSendCommand(0x38);

	/*wait for 1 ms*/
	_delay_ms(1);

	/*Display on with Cursor & Blink On*/

	CLCD_voidSendCommand(0x0F);

	/*Clear Display*/

	CLCD_voidSendCommand(0x01);

}

/*
* Breif : This Function send string to the port which is defined in config.h
* Parameters :
            => * Copy_u8ptString  --> Pointer to the string
* return : nothing
*/

void CLCD_SendString(const u8 *Copy_u8ptString)
{
	u8  localChar ;
	while(Copy_u8ptString[localChar]!='\0')
	{
		CLCD_voidSendData(Copy_u8ptString[localChar]);
		localChar++;
	}
}

/*
* Breif : This Function set the curser position
* Parameters :
            => Copy_u8Row --> row number (CLCD_ROW_1 or CLCD_ROW_2)
			=> Copy_u8Col --> column number (CLCD_COL_1 ... CLCD_COL_16)
* return : nothing
*Hint :-
   In This function we send a command which =0b1xxxxxxx
   MSB = 1  ===> refers that it is command to set cursor
   xxxxxxx  ===> refers to AC ( Address Counter 7Bits / DDRAM Locations 128Location )
*/
void CLCD_SendPosition(u8 Copy_u8Row,u8 Copy_u8Col)
{ 	u8 Loc_u8Address;
	if(0 == Copy_u8Row)
	{
		Loc_u8Address = Copy_u8Col;
	}
	else if(1 == Copy_u8Row)
	{
		Loc_u8Address=Copy_u8Col+0x40;
	}
	CLCD_voidSendCommand(Loc_u8Address);

}
/* Breif : This Function send extra char
* Parameters :
            => Copy_u8Row --> row number (CLCD_ROW_1 or CLCD_ROW_2)
			=> Copy_u8Col --> column number (CLCD_COL_1 ... CLCD_COL_16)
* return : nothing
* Hint :-
	Address Counter can refer to CGRAM and DDRAM
*/

void CLCD_WriteSpecialCharacter(u8 Copy_u8Row,u8 Copy_u8Col)
{
	u8 LOC_u8Iterator = 0 ;
	/* 1- Go To CGRAM            */
	CLCD_voidSendCommand( clcd_CGRAM );  // Make AC refers to the first Place/Address at CGRAM


	/* 2- Draw Character in CGRAM        */
	/* Hint : it will be copied to DDRAM automatically */
	for( LOC_u8Iterator = 0 ; LOC_u8Iterator < sizeof(CLCD_u8SpecialChar) / sizeof(CLCD_u8SpecialChar[0]) ; LOC_u8Iterator++){

		CLCD_voidSendData( CLCD_u8SpecialChar[LOC_u8Iterator] );

	}


	/* 3- Back (AC) To DDRAM          */
	CLCD_SendPosition(Copy_u8Row,Copy_u8Col);


	/* 4- Send Character Address */
	for( LOC_u8Iterator = 0 ; LOC_u8Iterator < 8 ; LOC_u8Iterator++ ){

		CLCD_voidSendData( LOC_u8Iterator );

	}


}



























