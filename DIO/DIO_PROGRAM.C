/*
 * DIO_PROGRAM.C
 *
 *  Created on: Sep 3, 2023
 *      Author: Youssef Alaa
 */
#include "LSTD_TYPES.h"
#include "LBIT_MATH.h"
#include "DIO_INTERFACE.h"
#include "DIO_REG.h"
#include "DIO_CONFIG.h"
#include "DIO_PRIVATE.h"

void DIO_voidSetPinDirection(u8 copy_u8Port, u8 copy_u8Pin, u8 copy_u8PinDirection)
{
	//flag used in debbuging and return equals u8
		//u8 Local_u8ErrorCopy=0;
		if(copy_u8Pin <= DIO_u8PIN7)
		{
			if(copy_u8PinDirection == DIO_u8PIN_INPUT)
			{
				switch(copy_u8Port)
				{
				case DIO_u8PORTA :CLR_BIT(DDRA , copy_u8Pin);break;
				case DIO_u8PORTB :CLR_BIT(DDRB , copy_u8Pin);break;
				case DIO_u8PORTC :CLR_BIT(DDRC , copy_u8Pin);break;
				case DIO_u8PORTD :CLR_BIT(DDRD  , copy_u8Pin);break;
				//default: Local_u8ErrorCode=1;
				}
			}
			else if(copy_u8PinDirection == DIO_u8PIN_OUTPUT)
			{
				switch(copy_u8Port)
				{
				case DIO_u8PORTA :SET_BIT(DDRA , copy_u8Pin);break;
				case DIO_u8PORTB :SET_BIT(DDRB , copy_u8Pin);break;
				case DIO_u8PORTC :SET_BIT(DDRC , copy_u8Pin);break;
				case DIO_u8PORTD :SET_BIT(DDRD  , copy_u8Pin);break;
				//default: Local_u8ErrorCode=1;


				}
				/*else{
							Local_u8ErrorCode=3;
						}
				 */

			}

			/*else
			{
			Local_u8ErrorCode=2;
			}
			 */
			//return Local_u8ErrorCode;
}

void DIO_voidSetPortDirection(u8 copy_u8Port,  u8 copy_u8PortDirection)
{
	switch(copy_u8Port)
	{
	case DIO
	case
	case
	case
	}

}
