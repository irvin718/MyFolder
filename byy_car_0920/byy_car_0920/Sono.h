﻿/*
 * Sono.h
 *
 * Created: 2018-09-14 오전 9:53:19
 *  Author: kccistc
 */ 


#ifndef SONO_H_
#define SONO_H_





#endif /* SONO_H_ */

#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>

void Sono_Timer_init(void);
uint8_t measure_distance(void);

double Distance_Data1;
double Distance_Data2;
double Distance_Data3;
double Distance_Data4;
double Distance_Data_sum;