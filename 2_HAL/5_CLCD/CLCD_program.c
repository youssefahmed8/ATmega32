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

#include "CLCD_config.h"
#include "CLCD_private.h"
#include "CLCD_interface.h"
#include "util/delay.h"

void CLCD_voidSendCommand(u8 Copy_u8Command)
{
	/*Set Commands to Data Pins*/

	DIO_enumSetPortValue(CLCD_DATA_PORT,Copy_u8Command);

	/*Set Rs Pin To low For  to send  command for CLCD*/

	DIO_enumSetPinValue(CLCD_CTRL_PORT,CLCD_RS_PIN,DIO_PIN_LOW);

	/*Set Rw Pin To low For  to write */

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

	/*Set Rw Pin To low For  to write */

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

void CLCD_SendString(const u8 *ptString)
{
	u8 * localChar = ptString;
	while(*localChar!='\0')
	{
		CLCD_voidSendData(*ptString);
		localChar++;
	}
}

