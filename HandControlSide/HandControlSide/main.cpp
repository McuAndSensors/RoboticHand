#define  F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include "megaregisters1.h"
#include "UART.h"
#include "bluetooth_AT_09.h"

void adcInit(){
	ADMUX = (1<<REFS0);
	ADCSRA = (1<<ADEN) | (1<<ADPS2) | (1<<ADPS1) | (1<<ADPS0);
}

uint16_t adcRead10 (uint8_t channel){
	channel &= 7;
	ADMUX &= ~(1<<ADLAR);
	ADMUX = (ADMUX & 0xF8) | channel;
	ADCSRA |= (1<<ADSC);
	while (ADCSRA & (1<<ADSC)) ;
	return (ADC);
}
	

int main(void)
{
	uint16_t adcvalue1 = 0, adcvalue2 = 0, adcvalue3 = 0, adcvalue4 = 0, adcvalue5 = 0;
	// finger1 = thumb,  finger2 = forefinger,  finger3 = middle finger,  finger4 = ring finger,  finger5 = little finger
	int finger1, finger2, finger3, finger4, finger5;
	// initialize timer in PWM mode
	adcInit();
	
	bluetooth Master;
	Master.setDeviceAsMaster();
	Master.setDeviceName("Amir_Master_Device");
	Master.connectToDevice("010203041ADE"); //Slave MAC address is: 01:02:03:04:1A:DE
	char inData[10];
	inData[0] = inData[6] = '*';
	inData[7] = '\0';
	// run forever
    while (1) 
    {
		_delay_ms(100);
		Master.sendData(inData);
		adcvalue1 = adcRead10(1);
		adcvalue2 = adcRead10(2);
		adcvalue3 = adcRead10(3);
		adcvalue4 = adcRead10(4);
		adcvalue5 = adcRead10(5);
		
		finger1 = adcvalue1;
		finger2 = adcvalue2;
		finger3 = adcvalue3;
		finger4 = adcvalue4;
		finger5 = adcvalue5;
		
		////// finger1  ///////
		if (finger1 > 510)
		{
			inData[1] = (finger1-510)/14*4+8;
		}
		else
		{
			inData[1] = 8;
		}
		
		////// finger2  ///////
		if (finger2 > 300)
		{
			inData[2] = (finger2-300)/24*4+8;
		}
		else
		{
			inData[2] = 8;
		}
		
		////// finger3  ///////
		if (finger3 > 180)
		{
			inData[5] = (finger3-180)/22*4+8;
		}
		else
		{
			inData[5] = 8;
		}
		
		////// finger4  ///////
		if (finger4 > 505)
		{
			inData[4] = (finger4-505)/16*4+8;
		}
		else
		{
			inData[4] = 8;
		}
		
		////// finger5  ///////
		if (finger5 > 255)
		{
			inData[3] = (finger5-255)/8*4+8;
		}
		else
		{
			inData[3] = 8;
		}
	 }     
}

