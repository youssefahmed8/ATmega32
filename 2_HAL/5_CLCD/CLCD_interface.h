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



void CLCD_voidSendCommand(u8 Copy_u8Command);


void CLCD_voidSendData(u8 Copy_u8Data);

void CLCD_Init(void);
void CLCD_SendString(const u8 *ptString);









#endif
