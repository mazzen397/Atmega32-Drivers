/*
 * Register.h
 *
 * Created: 7/15/2023 3:25:48 PM
 *  Author: Mazzen397
 */ 


#ifndef REGISTER_H_
#define REGISTER_H_

#include "Typedefs.h"
#define F_CPU 1000000
//PORTA REGISTERS
#define PORTA *((volatile uint8_t*)0x3B) 
#define DDRA  *((volatile uint8_t*)0x3A)
#define PINA  *((volatile uint8_t*)0x39)

//PORTB REGISTERS
#define PORTB *((volatile uint8_t*)0x38)
#define DDRB  *((volatile uint8_t*)0x37)
#define PINB  *((volatile uint8_t*)0x36)

//PORTC REGISTERS
#define PORTC *((volatile uint8_t*)0x35)
#define DDRC  *((volatile uint8_t*)0x34)
#define PINC  *((volatile uint8_t*)0x33)

//PORTD REGISTERS
#define PORTD *((volatile uint8_t*)0x32)
#define DDRD  *((volatile uint8_t*)0x31)
#define PIND  *((volatile uint8_t*)0x30)

//Timer0 REGISTERS
#define TCCR0  *((volatile uint8_t*)0x53)
#define TCNT0  *((volatile uint8_t*)0x52)
#define TIFR   *((volatile uint8_t*)0x58)
#define TIMSK  *((volatile uint8_t*)0x59)

//Interrupt Register
#define GICR   *((volatile uint8_t*)0x5B)
#define GIFR   *((volatile uint8_t*)0x5A)
#define MCUCR  *((volatile uint8_t*)0x55)
#define MCUCSR *((volatile uint8_t*)0x54)

//ADC Register
#define ADMUX  *((volatile uint8_t*)0x27)
#define ADCSRA *((volatile uint8_t*)0x26)
#define ADCH   *((volatile uint8_t*)0x25)
#define ADCL   *((volatile uint8_t*)0x24)

#endif /* REGISTER_H_ */