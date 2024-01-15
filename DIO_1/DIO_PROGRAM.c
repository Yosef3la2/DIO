/*
 * DIO_PROGRAM.c
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


void DIO_voidSetPortDirection(u8 copy_u8Port,  u8 copy_u8PortDirection)
{
	switch(copy_u8Port)
	{
	case DIO_u8PORTA   : DDRA =copy_u8PortDirection; break;
	case DIO_u8PORTB   : DDRB =copy_u8PortDirection; break;
	case DIO_u8PORTC   : DDRC =copy_u8PortDirection; break;
	case DIO_u8PORTD   : DDRD =copy_u8PortDirection; break;
	}
}

void DIO_voidSetPortValue(u8 copy_u8Port, u8 copy_u8PortValue)
{

	switch(copy_u8Port)
			{

			case DIO_u8PORTA: PORTA = copy_u8PortValue; break;
			case DIO_u8PORTB: PORTB = copy_u8PortValue; break;
			case DIO_u8PORTC: PORTC = copy_u8PortValue; break;
			case DIO_u8PORTD: PORTD = copy_u8PortValue; break;

			}


}

void DIO_voidSetPinDirection(u8 copy_u8Port, u8 copy_u8Pin, u8 copy_u8PinDirection)
{


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

}
void DIO_voidSetPinValue(u8 copy_u8Port, u8 copy_u8Pin, u8 copy_u8PinValue)
{


	if(copy_u8Pin <= DIO_u8PIN7)
		{
			if(copy_u8PinValue == DIO_u8PIN_LOW)
			{
				switch(copy_u8Port)
				{
				case DIO_u8PORTA :CLR_BIT(PORTA , copy_u8Pin);break;
				case DIO_u8PORTB :CLR_BIT(PORTB , copy_u8Pin);break;
				case DIO_u8PORTC :CLR_BIT(PORTC , copy_u8Pin);break;
				case DIO_u8PORTD :CLR_BIT(PORTD , copy_u8Pin);break;
				//default: Local_u8ErrorCode=1;
				}
			}
		else if(copy_u8PinValue == DIO_u8PIN_HIGH)
		{
			switch(copy_u8Port)
			{
			case DIO_u8PORTA :SET_BIT(PORTA , copy_u8Pin);break;
			case DIO_u8PORTB :SET_BIT(PORTB , copy_u8Pin);break;
			case DIO_u8PORTC :SET_BIT(PORTC , copy_u8Pin);break;
			case DIO_u8PORTD :SET_BIT(PORTD , copy_u8Pin);break;
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
}
u8 DIO_u8GetPinValue(u8 copy_u8Port , u8 copy_u8Pin)
{

	u8 Local_u8PinVal = 0 ;

			switch(copy_u8Port)
			{
			case DIO_u8PORTA :  Local_u8PinVal=GET_BIT(PINA , copy_u8Pin);break;
			case DIO_u8PORTB :  Local_u8PinVal=GET_BIT(PINB , copy_u8Pin);break;
			case DIO_u8PORTC :  Local_u8PinVal=GET_BIT(PINC , copy_u8Pin);break;
			case DIO_u8PORTD :  Local_u8PinVal=GET_BIT(PIND , copy_u8Pin);break;

			}

			return  Local_u8PinVal ;

}

