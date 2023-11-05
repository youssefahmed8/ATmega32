/****************************************************************/
/****************************************************************/
/**************   Author: Youssef  Ahmed	*********************/
/**************   Layer: HAL				*********************/
/**************   SWC: BUZZ					*********************/
/**************   Version: 1.00				*********************/
/**************   Date:1/11/2023				*********************/

#include "BUZZ_interface.h"
#include "DIO_interface.h"





void BUZZ_voidInit        ( BUZZ_Type BUZZ_Configuration )
{
	DIO_enumSetPinDirection(BUZZ_Configuration.Port,BUZZ_Configuration.Pin,DIO_PIN_OUTPUT);

}

void BUZZ_voidOn          ( BUZZ_Type BUZZ_Configuration )
{
	if(BUZZ_Configuration.Active_State == ACTIVE_HIGH )
	{
		DIO_enumSetPinValue(BUZZ_Configuration.Port,BUZZ_Configuration.Pin,DIO_PIN_HIGH);

	}
	else if(BUZZ_Configuration.Active_State == ACTIVE_LOW)
	{
		DIO_enumSetPinValue(BUZZ_Configuration.Port,BUZZ_Configuration.Pin,DIO_PIN_LOW);

	}

}

void BUZZ_voidOff         ( BUZZ_Type BUZZ_Configuration )
{
	if(BUZZ_Configuration.Active_State == ACTIVE_HIGH )
		{
			DIO_enumSetPinValue(BUZZ_Configuration.Port,BUZZ_Configuration.Pin,DIO_PIN_LOW);

		}
		else if(BUZZ_Configuration.Active_State == ACTIVE_LOW)
		{
			DIO_enumSetPinValue(BUZZ_Configuration.Port,BUZZ_Configuration.Pin,DIO_PIN_HIGH);

		}


}

void BUZZ_voidToggle      ( BUZZ_Type BUZZ_Configuration )
{

	DIO_enumTogglePinValue(BUZZ_Configuration.Port,BUZZ_Configuration.Pin);
}
