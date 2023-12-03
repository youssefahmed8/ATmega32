/****************************************************************/
/****************************************************************/
/**************   Author: Youssef  Ahmed	*********************/
/**************   Layer: HAL				*********************/
/**************   SWC: SSD					*********************/
/**************   Version: 1.00				*********************/

#ifndef SSD_INTERFACE_H_
#define SSD_INTERFACE_H_
#include "STD_TYPES.h"





#define SSD_PORTA	0
#define SSD_PORTB	1
#define SSD_PORTC	2
#define SSD_PORTD	3



#define SSD_PIN0	0
#define SSD_PIN1 	1
#define SSD_PIN2	2
#define SSD_PIN3	3
#define	SSD_PIN4	4
#define	SSD_PIN5	5
#define SSD_PIN6	6
#define SSD_PIN7	7

#define ACTIVE_HIGH    1
#define ACTIVE_LOW     0




typedef struct{

	u8 Active_State ;
	u8 DataPort;
	u8 EnablePort;
	u8 EnablePin;
}SSD_Type;


void SSD_voidInit        ( SSD_Type SSD_Configuration );

void SSD_voidOn          ( SSD_Type SSD_Configuration );

void SSD_voidOff         ( SSD_Type SSD_Configuration );

void SSD_voidToggle      ( SSD_Type SSD_Configuration );









#endif
