/***************************************************
 * This is a USART library for the MSP430.
 *
 * It can provide basic USART (serial) communication for any application.
 *
 * This code is in the public domain. Feel free to do with it whatever you want.
 *
 *
 *
 * FOR STUDENTS:
 *
 * This file will be given to you in an 'empty' state. The function bodies are
 * provided, but not their content. You are supposed to add the proper code
 * and complete these functions.
 *
 * Hint 1: RTFM! The Atmel device datasheets contain all information necessary.
 *
 * Hint 2: We do not expect you to write the most performant or exceptionally
 * well-engineered code, but it should work. If in doubt, sacrifice speed for
 * reliability. If you are bored, rewrite the entire library in assembler and
 * squeeze the last microsecond out of it.
 *
 ****************************************************/

#include <msp430.h>
#include <string.h>

#include "USART_implement_me.h"


// Esta funcion configura la comunicación USART con la tarjeta, ubrr es el baud rate.
void USART_Init(uint16_t ubrr)
{
	//Debe completar esta función
}



// Transmite solo un char, data corresponde al char a enviar
void USART_Transmit_char(uint8_t data)
{
	//Debe completar esta función
}
