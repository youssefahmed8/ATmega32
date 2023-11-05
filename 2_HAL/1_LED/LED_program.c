/****************************************************************/
/****************************************************************/
/**************   Author: Youssef  Ahmed	*********************/
/**************   Layer: HAL				*********************/
/**************   SWC: LED					*********************/
/**************   Version: 1.00				*********************/
/**************   Date:1/11/2023				*********************/

#include "LED_interface.h"
#include "DIO_interface.h"





void LED_voidInit( LED_Type LED_Configuration )
{

	DIO_enumSetPinDirection(LED_Configuration.Port, LED_Configuration.Pin, DIO_PIN_OUTPUT);

}


void LED_voidOn( LED_Type LED_Configuration )
{

	if(LED_Configuration.Active_State == ACTIVE_HIGH)
	{
		DIO_enumSetPinValue(LED_Configuration.Port, LED_Configuration.Pin, DIO_PIN_HIGH);
	}
	else if( LED_Configuration.Active_State == ACTIVE_LOW ){

			DIO_enumSetPinValue( LED_Configuration.Port , LED_Configuration.Pin , DIO_PIN_LOW  );

		}

}

void LED_voidOff( LED_Type LED_Configuration )
{
	if(LED_Configuration.Active_State == ACTIVE_HIGH)
		{
			DIO_enumSetPinValue(LED_Configuration.Port, LED_Configuration.Pin, DIO_PIN_LOW);
		}
		else if( LED_Configuration.Active_State == ACTIVE_LOW )
		{

			DIO_enumSetPinValue( LED_Configuration.Port , LED_Configuration.Pin , DIO_PIN_HIGH);

		}

}

void LED_voidToggle( LED_Type LED_Configuration )
{

	DIO_enumTogglePinValue(LED_Configuration.Port , LED_Configuration.Pin);

}
