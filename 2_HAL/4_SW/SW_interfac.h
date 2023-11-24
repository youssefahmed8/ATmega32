/****************************************************************/
/****************************************************************/
/**************   Author: Youssef  Ahmed	*********************/
/**************   Layer: HAL				*********************/
/**************   SWC: SW					*********************/
/**************   Version: 1.00				*********************/
/**************   Date: 8/11/23				*********************/
/****************************************************************/
/****************************************************************/
#ifndef SW_INTERFACE_H_
#define SW_INTERFACE_H_


#define PULLUP 			0
#define PULLDOWN		1

#define SW_PORTA	0
#define SW_PORTB	1
#define SW_PORTC	2
#define SW_PORTD	3



#define SW_PIN0		0
#define SW_PIN1 	1
#define SW_PIN2		2
#define SW_PIN3		3
#define	SW_PIN4		4
#define	SW_PIN5		5
#define SW_PIN6		6
#define SW_PIN7		7


typedef struct
{
	u8 SW_Type;
	u8 SW_Pin;
	u8 SW_Port;

}SW_type;

void SW_voidInit(SW_type SW_Config);




#endif



