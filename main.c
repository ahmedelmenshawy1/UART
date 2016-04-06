/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: ahmed
 */
#include "delay.h"
#include "Types.h"
#include "UART_Interface.h"
#include "DIO_interface.h"
#include "DIO_Private.h"



int main (void)
{
	UART_voidInit();
	DIO_u8WritePortDir(1,DIO_u8OUTPUT_Port);
	//u8 a[]="12";
	//UART_voidSendFromArrayWithNullCh(a);
	while(1)
	{
		//UART_voidTransmit('a');
		///*
		 if( UART_u8Receive() =='a')
		{
			PORTB=0xff;
		}
		else
		{
			PORTB=0x00;
		}
//*/

	}
	return 0;
}
