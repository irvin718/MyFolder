﻿/*
 * ShiftRegister.h
 *
 * Created: 2018-09-17 오후 3:57:04
 *  Author: 6층교수실PC
 */ 


#ifndef SHIFTREGISTER_H_
#define SHIFTREGISTER_H_

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

#define setbit(X, Y)				( X |= (1 << Y) )
#define clearbit(X, Y)				( X &= ~(1 << Y) )

#define SHIFT_REGISTER_DDR			DDRA
#define SHIFT_REGISTER_PORT			PORTA
#define SHIFT_REGISTER_DATA_PIN		2
#define SHIFT_REGISTER_CLOCK_PIN	0
#define SHIFT_REGISTER_LATCH_PIN	1

void ShiftRegisterInit(void);
void ShiftRegisterDataWrite(uint8_t data);
void ShiftRegisterClock(void);
void ShiftRegisterLatch(void);

#endif /* SHIFTREGISTER_H_ */