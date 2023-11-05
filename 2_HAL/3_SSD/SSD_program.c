/****************************************************************/
/****************************************************************/
/**************   Author: Youssef  Ahmed	*********************/
/**************   Layer: HAL				*********************/
/**************   SWC: SSD					*********************/
/**************   Version: 1.00				*********************/
/**************   Date:1/11/2023				*********************/

#include "SSD_interface.h"
#include "DIO_interface.h"





void SSD_voidInit        ( SSD_Type SSD_Configuration )
{
	DIO_enumSetPinDirection(SSD_Configuration.Port,SSD_Configuration.Pin,DIO_PIN_OUTPUT);

}

void SSD_voidOn          ( SSD_Type SSD_Configuration )
{
	if(SSD_Configuration.Active_State == ACTIVE_HIGH )
	{
		DIO_enumSetPinValue(SSD_Configuration.Port,SSD_Configuration.Pin,DIO_PIN_HIGH);

	}
	else if(SSD_Configuration.Active_State == ACTIVE_LOW)
	{
		DIO_enumSetPinValue(SSD_Configuration.Port,SSD_Configuration.Pin,DIO_PIN_LOW);

	}

}

void SSD_voidOff         ( SSD_Type SSD_Configuration )
{
	if(SSD_Configuration.Active_State == ACTIVE_HIGH )
		{
			DIO_enumSetPinValue(SSD_Configuration.Port,SSD_Configuration.Pin,DIO_PIN_LOW);

		}
		else if(SSD_Configuration.Active_State == ACTIVE_LOW)
		{
			DIO_enumSetPinValue(SSD_Configuration.Port,SSD_Configuration.Pin,DIO_PIN_HIGH);

		}


}

void SSD_voidToggle      ( SSD_Type SSD_Configuration )
{

	DIO_enumTogglePinValue(SSD_Configuration.Port,SSD_Configuration.Pin);
}
