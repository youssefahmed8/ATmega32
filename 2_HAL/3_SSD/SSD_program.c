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
	DIO_enumSetPortDirection    ( Copy_structConfig.DataPort , 0xFF );

}
/*
 * Breif : This Function enable common pin
 * Parameters : => struct has the SSD type , data port and enable(port & pin)
 * return : void
 */
void SSD_voidOn          ( SSD_Type SSD_Configuration )
{
	if(SSD_Configuration.Active_State == ACTIVE_HIGH )
	{
		DIO_enumSetPinDirection( SSD_Configuration.EnablePort , SSD_Configuration.EnablePin , DIO_PIN_HIGH );
		DIO_enumSetPinValue( SSD_Configuration.EnablePort , SSD_Configuration.EnablePin , DIO_PIN_HIGH );

	}
	else if(SSD_Configuration.Active_State == ACTIVE_LOW)
	{
		DIO_enumSetPinDirection( SSD_Configuration.EnablePort , SSD_Configuration.EnablePin , DIO_PIN_HIGH );
		DIO_enumSetPinValue( SSD_Configuration.EnablePort , SSD_Configuration.EnablePin , DIO_PIN_LOW );

	}

}

/*
 * Breif : This Function disable common pin
 * Parameters : => struct has the SSD type , data port and enable(port & pin)
 * return : void
 */
void SSD_voidOff         ( SSD_Type SSD_Configuration )
{
	if(SSD_Configuration.Active_State == ACTIVE_HIGH )
		{
			DIO_enumSetPinDirection( SSD_Configuration.EnablePort , SSD_Configuration.EnablePin , DIO_PIN_HIGH );
			DIO_enumSetPinValue( SSD_Configuration.EnablePort , SSD_Configuration.EnablePin , DIO_PIN_LOW );

		}
		else if(SSD_Configuration.Active_State == ACTIVE_LOW)
		{
			DIO_enumSetPinDirection( SSD_Configuration.EnablePort , SSD_Configuration.EnablePin , DIO_PIN_HIGH );
			DIO_enumSetPinValue( SSD_Configuration.EnablePort , SSD_Configuration.EnablePin , DIO_PIN_HIGH );

		}


}

void SSD_voidToggle      ( SSD_Type SSD_Configuration )
{

	DIO_enumTogglePinValue(SSD_Configuration.Port,SSD_Configuration.Pin);
}
