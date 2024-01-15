/*
 * DIO_REG.h
 *
 *  Created on: Sep 3, 2023
 *      Author: Youssef Alaa
 */

#ifndef DIO_REG_H_
#define DIO_REG_H_
/******A*******/

 #define PORTA 		*( ( volatile u8* )0x3B )
 #define DDRA  		*( ( volatile u8* )0x3A )
 #define PINA	    *( ( volatile u8* )0x39 )

/******B*******/

 #define PORTB 		*( ( volatile u8* )0x38 )
 #define DDRB 		*( ( volatile u8* )0x37 )
 #define PINB 		*( ( volatile u8* )0x36 )

/******C*******/

 #define PORTC 		*( ( volatile u8* )0x35 )
 #define DDRC  		*( ( volatile u8* )0x34 )
 #define PINC  		*( ( volatile u8* )0x33 )

/******D*******/

 #define PORTD 		*( ( volatile u8* )0x32 )
 #define DDRD  		*( ( volatile u8* )0x31 )
 #define PIND  		*( ( volatile u8* )0x30 )



#endif /* DIO_REG_H_ */
