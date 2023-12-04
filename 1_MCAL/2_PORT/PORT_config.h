/****************************************************************************************************************************************************/
/****************************************************************************************************************************************************/
/**************   Author: Youssef Ahmed									*****************************************************************************/
/**************   Layer: MCAL											*****************************************************************************/
/**************   SWC: PORT												*****************************************************************************/
/**************   Version: 1.00											*****************************************************************************/
/**************   Date: 12-4/23											*****************************************************************************/
/**************   Linkedin : www.linkedin.com/in/youssef-ahmed-saied	*****************************************************************************/
/****************************************************************************************************************************************************/
/****************************************************************************************************************************************************/

#ifndef PORT_CONFIG_H
#define PORT_CONFIG_H


/*		 	   $ Options :-
 * 								0	For	 input
 * 							    1	For	 output			*/

#define PORTA_PIN0_DIR	  0
#define PORTA_PIN1_DIR	  0
#define PORTA_PIN2_DIR	  0
#define PORTA_PIN3_DIR	  0
#define PORTA_PIN4_DIR	  0
#define PORTA_PIN5_DIR	  0
#define PORTA_PIN6_DIR	  0
#define PORTA_PIN7_DIR	  0

#define PORTB_PIN0_DIR	  0
#define PORTB_PIN1_DIR	  0
#define PORTB_PIN2_DIR	  0
#define PORTB_PIN3_DIR	  0
#define PORTB_PIN4_DIR	  0
#define PORTB_PIN5_DIR	  0
#define PORTB_PIN6_DIR	  0
#define PORTB_PIN7_DIR	  0

#define PORTC_PIN0_DIR	  0
#define PORTC_PIN1_DIR	  0
#define PORTC_PIN2_DIR	  0
#define PORTC_PIN3_DIR	  0
#define PORTC_PIN4_DIR	  0
#define PORTC_PIN5_DIR	  0
#define PORTC_PIN6_DIR	  0
#define PORTC_PIN7_DIR	  0

#define PORTD_PIN0_DIR	  0
#define PORTD_PIN1_DIR	  0
#define PORTD_PIN2_DIR	  0
#define PORTD_PIN3_DIR	  0
#define PORTD_PIN4_DIR	  0
#define PORTD_PIN5_DIR	  0
#define PORTD_PIN6_DIR	  0
#define PORTD_PIN7_DIR	  0
/****************** PINS Values   *******************/

/* INPUT Values   */

#define INPUT_FLOATING 	  0
#define INPUT_PULLUP      1

/* OUTPUT Values  */

#define OUTPUT_LOW    	  0
#define OUTPUT_HIGH       1
/*  $ Choose:-
			1- INPUT_FLOATING
			2- INPUT_PULLUP
			3- OUTPUT_LOW
			4- OUTPUT_HIGH
*/

/*
 Hint : This is the initial values for the system we could change it using DIO driver
*/
#define PORTA_PIN0_InitVal	       INPUT_FLOATING
#define PORTA_PIN1_InitVal         INPUT_FLOATING
#define PORTA_PIN2_InitVal         INPUT_FLOATING
#define PORTA_PIN3_InitVal         INPUT_FLOATING
#define PORTA_PIN4_InitVal         INPUT_FLOATING
#define PORTA_PIN5_InitVal         INPUT_FLOATING
#define PORTA_PIN6_InitVal         INPUT_FLOATING
#define PORTA_PIN7_InitVal         INPUT_FLOATING


#define PORTB_PIN0_InitVal	       INPUT_FLOATING
#define PORTB_PIN1_InitVal         INPUT_FLOATING
#define PORTB_PIN2_InitVal         INPUT_FLOATING
#define PORTB_PIN3_InitVal         INPUT_FLOATING
#define PORTB_PIN4_InitVal         INPUT_FLOATING
#define PORTB_PIN5_InitVal         INPUT_FLOATING
#define PORTB_PIN6_InitVal         INPUT_FLOATING
#define PORTB_PIN7_InitVal         INPUT_FLOATING


#define PORTC_PIN0_InitVal	       INPUT_FLOATING
#define PORTC_PIN1_InitVal         INPUT_FLOATING
#define PORTC_PIN2_InitVal         INPUT_FLOATING
#define PORTC_PIN3_InitVal         INPUT_FLOATING
#define PORTC_PIN4_InitVal         INPUT_FLOATING
#define PORTC_PIN5_InitVal         INPUT_FLOATING
#define PORTC_PIN6_InitVal         INPUT_FLOATING
#define PORTC_PIN7_InitVal         INPUT_FLOATING


#define PORTD_PIN0_InitVal	       INPUT_FLOATING
#define PORTD_PIN1_InitVal         INPUT_FLOATING
#define PORTD_PIN2_InitVal         INPUT_FLOATING
#define PORTD_PIN3_InitVal         INPUT_FLOATING
#define PORTD_PIN4_InitVal         INPUT_FLOATING
#define PORTD_PIN5_InitVal         INPUT_FLOATING
#define PORTD_PIN6_InitVal         INPUT_FLOATING
#define PORTD_PIN7_InitVal         INPUT_FLOATING

#endif
