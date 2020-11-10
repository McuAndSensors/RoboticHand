/*
 * tiuta.c
 *
 * Created: 15/10/2017 15:40:25
 *  Author: amir
 */ 
#define  F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include "megaregisters1.h"
#include "UART.h"
#include "bluetooth_AT_09.h"

// set as fast pwm mode 3

void pwm_init()
{
	//define compare of register A & B on mode 3
	//mode 3 is setting the bit while up counting and clear the bit in down counting
	TCCR0A |= ( 1 << WGM01 | 1 << WGM00 | 1 << COM0A1);
	TCCR1A |= ( 1 << WGM40 | 1 << COM4A1);
	TCCR5A |= ( 1 << WGM40 | 1 << COM4A1);
	TCCR3A |= ( 1 << WGM40 | 1 << COM4A1);
	TCCR4A |= ( 1 << WGM40 | 1 << COM4A1);

	//from prscaler by Fclk/1024  15.6 * 2 = 32 // timer/counter control register
	
	TCCR0B |= (1 << CS00) | (1 << CS02);
	TCCR1B |= (1 << CS40) | (1 << CS42) | (1 << WGM42);
	TCCR5B |= (1 << CS40) | (1 << CS42) | (1 << WGM42);
	TCCR3B |= (1 << CS40) | (1 << CS42) | (1 << WGM42);
	TCCR4B |= (1 << CS40) | (1 << CS42) | (1 << WGM42);

	//clear all interrupts
	TIFR0 = 7;

	//setting PB7 PB6 PB5 PB4 PH6 as outputs

	//DDRB |= (1<<PB7);
	PDB7 = 1;
	PDB6 = 1;
	PDB5 = 1;
	PDL3 = 1;
	PDH6 = 1;
}


int main()
{
	pwm_init();
	
	PDB7 = 1;  // OC0A PIN 13
	PDB5 = 1;  // OC1A PIN 11
	PDL3 = 1;  // OC5A PIN 38
	PDE3 = 1; // OC3A PIN 5
	PDH3 = 1; // OC4A PIN 6

	bluetooth Slave;
	Slave.setDeviceAsSlave();
	Slave.setDeviceName("Amir_Slave_Device");
	char inData[10];
	// run forever
	while(1)
	{
		if(Slave.getData(inData))
		{
			if (inData[0] == '*' && inData[6] == '*')
			{
				OCR0A = inData[1];
				OCR1A = inData[2];
				OCR3A = inData[3];
				OCR4A = inData[4];
				OCR5A =	inData[5];
			}
		}
	}
	return 0;
}