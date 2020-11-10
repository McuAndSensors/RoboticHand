//			Last Update: 14/09/17

#ifndef _MEGAREGISTERS_H_
#define _MEGAREGISTERS_H_

#define SET(x,y)	(x|=(1<<y))
#define CLR(x,y)	(x&=(~(1<<y)))
#define CHK(x,y)	(x & (1<<y))
#define TOG(x,y)	(x^=(1<<y))

typedef struct{ 
	unsigned char b0:1;
	unsigned char b1:1;
	unsigned char b2:1;
	unsigned char b3:1;
	unsigned char b4:1;
	unsigned char b5:1;
	unsigned char b6:1;
    unsigned char b7:1; } bits;
	
	//UDR3 -PAGE 218
	#define _UDR3 UDR3

	//UBRR3 -PAGE 222
	#define _UBRR3H UBRR3H
	#define _UBRR3L UBRR3L

	//UCSR3C -PAGE 235
	#define _UCSR3C (* (volatile bits *) &UCSR3C)
	#define _UMSEL31	_UCSR3C.b7
	#define _UMSEL30	_UCSR3C.b6
	#define _UPM31		_UCSR3C.b5
	#define _UPM30		_UCSR3C.b4
	#define _USBS3		_UCSR3C.b3
	#define _UCSZ31		_UCSR3C.b2
	#define _UCSZ30		_UCSR3C.b1
	#define _UCPOL3		_UCSR3C.b0

	//UCSR3B -PAGE 234
	#define _UCSR3B (* (volatile bits *) &UCSR3B)
	#define _RXCIE3			_UCSR3B.b7
	#define _TXCIE3			_UCSR3B.b6
	#define _UDRIE3			_UCSR3B.b5
	#define _RXEN3			_UCSR3B.b4
	#define _TXEN3			_UCSR3B.b3
	#define _UCSZ32		    _UCSR3B.b2
	#define _RXB83			_UCSR3B.b1
	#define _TXB83			_UCSR3B.b0

	//UCSR3A -PAGE 233
	#define _UCSR3A (* (volatile bits *) &UCSR3A)
	#define _RXC3		_UCSR3A.b7
	#define _TXC3		_UCSR3A.b6
	#define _UDRE3		_UCSR3A.b5
	#define _FE3		_UCSR3A.b4
	#define _DOR3		_UCSR3A.b3
	#define _UPE3		_UCSR3A.b2
	#define _U2X3		_UCSR3A.b1
	#define _MPCM3	    _UCSR3A.b0
	//UDR2
	#define _UDR2 UDR2

	//UBRR2
	#define _UBRR2H UBRR2H
	#define _UBRR2L UBRR2L

	//UCSR2C
	#define _UCSR2C (* (volatile bits *) &UCSR2C)
	#define _UMSEL21	_UCSR2C.b7
	#define _UMSEL20	_UCSR2C.b6
	#define _UPM21		_UCSR2C.b5
	#define _UPM20		_UCSR2C.b4
	#define _USBS2		_UCSR2C.b3
	#define _UCSZ21		_UCSR2C.b2
	#define _UCSZ20		_UCSR2C.b1
	#define _UCPOL2		_UCSR2C.b0

	//UCSR2B
	#define _UCSR2B (* (volatile bits *) &UCSR2B)
	#define _RXCIE2			_UCSR2B.b7
	#define _TXCIE2			_UCSR2B.b6
	#define _UDRIE2			_UCSR2B.b5
	#define _RXEN2			_UCSR2B.b4
	#define _TXEN2			_UCSR2B.b3
	#define _UCSZ22		    _UCSR2B.b2
	#define _RXB82			_UCSR2B.b1
	#define _TXB82			_UCSR2B.b0

	//UCSR2A
	#define _UCSR2A (* (volatile bits *) &UCSR2A)
	#define _RXC2		_UCSR2A.b7
	#define _TXC2		_UCSR2A.b6
	#define _UDRE2		_UCSR2A.b5
	#define _FE2		_UCSR2A.b4
	#define _DOR2		_UCSR2A.b3
	#define _UPE2		_UCSR2A.b2
	#define _U2X2		_UCSR2A.b1
	#define _MPCM2	    _UCSR2A.b0
	
	//UDR1
	#define _UDR1 UDR1

	//UBRR1
	#define _UBRR1H UBRR1H
	#define _UBRR1L UBRR1L

	//UCSR1C
	#define _UCSR1C (* (volatile bits *) &UCSR1C)
	#define _UMSEL11	_UCSR1C.b7
	#define _UMSEL10	_UCSR1C.b6
	#define _UPM11		_UCSR1C.b5
	#define _UPM10		_UCSR1C.b4
	#define _USBS1		_UCSR1C.b3
	#define _UCSZ11		_UCSR1C.b2
	#define _UCSZ10		_UCSR1C.b1
	#define _UCPOL1		_UCSR1C.b0

	//UCSR1B
	#define _UCSR1B (* (volatile bits *) &UCSR1B)
	#define _RXCIE1			_UCSR1B.b7
	#define _TXCIE1			_UCSR1B.b6
	#define _UDRIE1			_UCSR1B.b5
	#define _RXEN1			_UCSR1B.b4
	#define _TXEN1			_UCSR1B.b3
	#define _UCSZ12		    _UCSR1B.b2
	#define _RXB81			_UCSR1B.b1
	#define _TXB81			_UCSR1B.b0

	//UCSR1A
	#define _UCSR1A (* (volatile bits *) &UCSR1A)
	#define _RXC1		_UCSR1A.b7
	#define _TXC1		_UCSR1A.b6
	#define _UDRE1		_UCSR1A.b5
	#define _FE1		_UCSR1A.b4
	#define _DOR1		_UCSR1A.b3
	#define _UPE1		_UCSR1A.b2
	#define _U2X1		_UCSR1A.b1
	#define _MPCM1	    _UCSR1A.b0

//UDR0 -PAGE 218
#define _UDR0 UDR0

//UBRR0 -PAGE 222
#define _UBRR0H UBRR0H
#define _UBRR0L UBRR0L

//UCSR0C - PAGE 235
#define _UCSR0C (* (volatile bits *) &UCSR0C)
#define _UMSEL01	_UCSR0C.b7
#define _UMSEL00	_UCSR0C.b6
#define _UPM01		_UCSR0C.b5
#define _UPM00		_UCSR0C.b4
#define _USBS0		_UCSR0C.b3
#define _UCSZ01		_UCSR0C.b2
#define _UCSZ00		_UCSR0C.b1
#define _UCPOL0		_UCSR0C.b0

//UCSR0B - PAGE 234
#define _UCSR0B (* (volatile bits *) &UCSR0B)
#define _RXCIE0			_UCSR0B.b7
#define _TXCIE0			_UCSR0B.b6
#define _UDRIE0			_UCSR0B.b5
#define _RXEN0			_UCSR0B.b4
#define _TXEN0			_UCSR0B.b3
#define _UCSZ02		    _UCSR0B.b2
#define _RXB80			_UCSR0B.b1
#define _TXB80			_UCSR0B.b0

//UCSR0A - PAGE 234 
#define _UCSR0A (* (volatile bits *) &UCSR0A)
#define _RXC0		_UCSR0A.b7
#define _TXC0		_UCSR0A.b6
#define _UDRE0		_UCSR0A.b5
#define _FE0		_UCSR0A.b4
#define _DOR0		_UCSR0A.b3
#define _UPE0		_UCSR0A.b2
#define _U2X0		_UCSR0A.b1
#define _MPCM0	    _UCSR0A.b0

//TWAMR - PAGE 264
#define _TWAMR (* (volatile bits *) &TWAMR)
#define _TWAM6		_TWAMR.b7
#define _TWAM5		_TWAMR.b6
#define _TWAM4		_TWAMR.b5
#define _TWAM3		_TWAMR.b4
#define _TWAM2		_TWAMR.b3
#define _TWAM1		_TWAMR.b2
#define _TWAM0		_TWAMR.b1

//TWCR
#define _TWCR (* (volatile bits *) &TWCR)
#define _TWINT		_TWCR.b7
#define _TWEA		_TWCR.b6
#define _TWSTA		_TWCR.b5
#define _TWSTO		_TWCR.b4
#define _TWWC		_TWCR.b3
#define _TWEN		_TWCR.b2
#define _TWIE		_TWCR.b0

//TWDR
#define _TWDR	TWDR

//TWAR  
#define _TWAR (* (volatile bits *) &TWAR)
#define _TWA6  _TWAR.b7
#define _TWA5  _TWAR.b6
#define _TWA4  _TWAR.b5
#define _TWA3  _TWAR.b4
#define _TWA2  _TWAR.b3
#define _TWA1  _TWAR.b2
#define _TWA0  _TWAR.b1
#define _TWGCE _TWAR.b0

//TWSR  
#define _TWSR (* (volatile bits *) &TWSR)
#define _TWS7  _TWSR.b7
#define _TWS6  _TWSR.b6
#define _TWS5  _TWSR.b5
#define _TWS4  _TWSR.b4
#define _TWS3  _TWSR.b3
#define _TWPS1 _TWSR.b1
#define _TWPS0 _TWSR.b0

//TWBR
#define _TWBR TWBR

//ASSR
#define _ASSR (* (volatile bits *) &ASSR)
#define _EXCLK		_ASSR.b6
#define _AS2		_ASSR.b5
#define _TCN2UB		_ASSR.b4
#define _OCR2AUB	_ASSR.b3
#define _OCR2BUB	_ASSR.b2
#define _TCR2AUB	_ASSR.b1
#define _TCR2BUB	_ASSR.b0

//OCR2B
#define _OCR2B OCR2B

//OCR2A
#define _OCR2A OCR2A

//TCNT2
#define _TCNT2 TCNT2

//TCCR2B
#define _TCCR2B (* (volatile bits *) &TCCR2B)
#define _FOC2A		_TCCR2B.b7
#define _FOC2B		_TCCR2B.b6
#define _WGM22		_TCCR2B.b3
#define _CS22		_TCCR2B.b2
#define _CS21		_TCCR2B.b1
#define _CS20		_TCCR2B.b0

//TCCR2A
#define _TCCR2A (* (volatile bits *) &TCCR2A)
#define _COM2A1		_TCCR2A.b7
#define _COM2A0		_TCCR2A.b6
#define _COM2B1		_TCCR2A.b5
#define _COM2B0		_TCCR2A.b4
#define _WGM21		_TCCR2A.b1
#define _WGM20		_TCCR2A.b0

//OCR5
#define _OCR5CH		OCR5CH
#define _OCR5CL		OCR5CL
#define _OCR5BH		OCR5BH
#define _OCR5BL		OCR5BL
#define _OCR5AH		OCR5AH
#define _OCR5AL		OCR5AL
#define _ICR5H		ICR5H
#define _ICR5L		ICR5L
#define _TCNT5H		TCNT5H
#define _TCNT5L		TCNT5L

//TCCR5C
#define _TCCR5C (* (volatile bits *) &TCCR5C)
#define _FOC5A		_TCCR5C.b7
#define _FOC5B		_TCCR5C.b6
#define _FOC5C		_TCCR5C.b5

//TCCR5B
#define _TCCR5B (* (volatile bits *) &TCCR5B)
#define _ICNC5		_TCCR5B.b7
#define _ICES5		_TCCR5B.b6
#define _WGM53		_TCCR5B.b4
#define _WGM52		_TCCR5B.b3
#define _CS52		_TCCR5B.b2
#define _CS51		_TCCR5B.b1
#define _CS50		_TCCR5B.b0

//TCCR5A
#define _TCCR5A (* (volatile bits *) &TCCR5A)
#define _COM5A1		_TCCR5A.b7
#define _COM5A0		_TCCR5A.b6
#define _COM5B1		_TCCR5A.b5
#define _COM5B0		_TCCR5A.b4
#define _COM5C1		_TCCR5A.b3
#define _COM5C0		_TCCR5A.b2
#define _WGM51		_TCCR5A.b1
#define _WGM50		_TCCR5A.b0

//OCR4
#define _OCR4CH		OCR4CH
#define _OCR4CL		OCR4CL
#define _OCR4BH		OCR4BH
#define _OCR4BL		OCR4BL
#define _OCR4AH		OCR4AH
#define _OCR4AL		OCR4AL
#define _ICR4H		ICR4H
#define _ICR4L		ICR4L
#define _TCNT4H		TCNT4H
#define _TCNT4L		TCNT4L

//TCCR4C
#define _TCCR4C (* (volatile bits *) &TCCR4C)
#define _FOC4A		_TCCR4C.b7
#define _FOC4B		_TCCR4C.b6
#define _FOC4C		_TCCR4C.b5

//TCCR4B
#define _TCCR4B (* (volatile bits *) &TCCR4B)
#define _ICNC4		_TCCR4B.b7
#define _ICES4		_TCCR4B.b6
#define _WGM43		_TCCR4B.b4
#define _WGM42		_TCCR4B.b3
#define _CS42		_TCCR4B.b2
#define _CS41		_TCCR4B.b1
#define _CS40		_TCCR4B.b0

//TCCR4A
#define _TCCR4A (* (volatile bits *) &TCCR4A)
#define _COM4A1		_TCCR4A.b7
#define _COM4A0		_TCCR4A.b6
#define _COM4B1		_TCCR4A.b5
#define _COM4B0		_TCCR4A.b4
#define _COM4C1		_TCCR4A.b3
#define _COM4C0		_TCCR4A.b2
#define _WGM41		_TCCR4A.b1
#define _WGM40		_TCCR4A.b0


//OCR3
#define _OCR3CH		OCR3CH
#define _OCR3CL		OCR3CL
#define _OCR3BH		OCR3BH
#define _OCR3BL		OCR3BL
#define _OCR3AH		OCR3AH
#define _OCR3AL		OCR3AL
#define _ICR3H		ICR3H
#define _ICR3L		ICR3L
#define _TCNT3H		TCNT3H
#define _TCNT3L		TCNT3L

//TCCR3C
#define _TCCR3C (* (volatile bits *) &TCCR3C)
#define _FOC3A		_TCCR3C.b7
#define _FOC3B		_TCCR3C.b6
#define _FOC3C		_TCCR3C.b5

//TCCR3B
#define _TCCR3B (* (volatile bits *) &TCCR3B)
#define _ICNC3		_TCCR3B.b7
#define _ICES3		_TCCR3B.b6
#define _WGM33		_TCCR3B.b4
#define _WGM32		_TCCR3B.b3
#define _CS32		_TCCR3B.b2
#define _CS31		_TCCR3B.b1
#define _CS30		_TCCR3B.b0

//TCCR3A
#define _TCCR3A (* (volatile bits *) &TCCR3A)
#define _COM3A1		_TCCR3A.b7
#define _COM3A0		_TCCR3A.b6
#define _COM3B1		_TCCR3A.b5
#define _COM3B0		_TCCR3A.b4
#define _COM3C1		_TCCR3A.b3
#define _COM3C0		_TCCR3A.b2
#define _WGM31		_TCCR3A.b1
#define _WGM30		_TCCR3A.b0

//OCR1 - PAGE 159
#define _OCR1CH		OCR1CH
#define _OCR1CL		OCR1CL
#define _OCR1BH		OCR1BH
#define _OCR1BL		OCR1BL
#define _OCR1AH		OCR1AH
#define _OCR1AL		OCR1AL
#define _ICR1H		ICR1H
#define _ICR1L		ICR1L
#define _TCNT1H		TCNT1H
#define _TCNT1L		TCNT1L

//TCCR1C
#define _TCCR1C (* (volatile bits *) &TCCR1C)
#define _FOC1A		_TCCR1C.b7
#define _FOC1B		_TCCR1C.b6
#define _FOC1C		_TCCR1C.b5

//TCCR1B
#define _TCCR1B (* (volatile bits *) &TCCR1B)
#define _ICNC1		_TCCR1B.b7
#define _ICES1		_TCCR1B.b6
#define _WGM13		_TCCR1B.b4
#define _WGM12		_TCCR1B.b3
#define _CS12		_TCCR1B.b2
#define _CS11		_TCCR1B.b1
#define _CS10		_TCCR1B.b0

//TCCR1A
#define _TCCR1A (* (volatile bits *) &TCCR1A)
#define _COM1A1		_TCCR1A.b7
#define _COM1A0		_TCCR1A.b6
#define _COM1B1		_TCCR1A.b5
#define _COM1B0		_TCCR1A.b4
#define _COM1C1		_TCCR1A.b3
#define _COM1C0		_TCCR1A.b2
#define _WGM11		_TCCR1A.b1
#define _WGM10		_TCCR1A.b0


//OCR0B
#define _OCR0B OCR0B

//OCR0A PAGE 130
#define _OCR0A OCR0A

//TCNT0
#define _TCNT0 TCNT0

//TCCR0B PAGE 129
#define _TCCR0B (* (volatile bits *) &TCCR0B)
#define _FOC0A		_TCCR0B.b7
#define _FOC0B		_TCCR0B.b6
#define _WGM02		_TCCR0B.b3
#define _CS02		_TCCR0B.b2
#define _CS01		_TCCR0B.b1
#define _CS00		_TCCR0B.b0

//TCCR0A PAGE 126
#define _TCCR0A (* (volatile bits *) &TCCR0A)
#define _COM0A1		_TCCR0A.b7
#define _COM0A0		_TCCR0A.b6
#define _COM0B1		_TCCR0A.b5
#define _COM0B0		_TCCR0A.b4
#define _WGM01		_TCCR0A.b1
#define _WGM00		_TCCR0A.b0


//DIDR1
#define _DIDR1 (* (volatile bits *) &DIDR1)
#define _AIN1D		_DIDR1.b1
#define _AIN0D		_DIDR1.b0

//DIDR2
#define _DIDR2 (* (volatile bits *) &DIDR2)
#define _ADC15D		_DIDR2.b7
#define _ADC14D		_DIDR2.b6
#define _ADC13D		_DIDR2.b5
#define _ADC12D		_DIDR2.b4
#define _ADC11D		_DIDR2.b3
#define _ADC10D		_DIDR2.b2
#define _ADC9D		_DIDR2.b1
#define _ADC8D		_DIDR2.b0

//DIDR0
#define _DIDR0 (* (volatile bits *) &DIDR0)
#define _ADC7D		_DIDR0.b7
#define _ADC6D		_DIDR0.b6
#define _ADC5D		_DIDR0.b5
#define _ADC4D		_DIDR0.b4
#define _ADC3D		_DIDR0.b3
#define _ADC2D		_DIDR0.b2
#define _ADC1D		_DIDR0.b1
#define _ADC0D		_DIDR0.b0

//ADMUX
#define _ADMUX (* (volatile bits *) &ADMUX)
#define _REFS1		_ADMUX.b7
#define _REFS0		_ADMUX.b6
#define _ADLAR		_ADMUX.b5
#define _MUX4		_ADMUX.b4
#define _MUX3		_ADMUX.b3
#define _MUX2		_ADMUX.b2
#define _MUX1		_ADMUX.b1
#define _MUX0		_ADMUX.b0

//ADCSRB
#define _ADCSRB (* (volatile bits *) &ADCSRB)
#define _ACME		_ADCSRB.b6
#define _MUX5		_ADCSRB.b3
#define _ADTS2		_ADCSRB.b2
#define _ADTS1		_ADCSRB.b1
#define _ADTS0		_ADCSRB.b0

//ADCSRA
#define _ADCSRA (* (volatile bits *) &ADCSRA)
#define _ADEN		_ADCSRA.b7
#define _ADSC		_ADCSRA.b6
#define _ADATE		_ADCSRA.b5
#define _ADIF		_ADCSRA.b4
#define _ADIE		_ADCSRA.b3
#define _ADPS2		_ADCSRA.b2
#define _ADPS1		_ADCSRA.b1
#define _ADPS0		_ADCSRA.b0

//ADC
#define _ADCH		ADCH
#define _ADCL		ADCL

//XMCRB - PAGE 38
#define _XMCRB (* (volatile bits *) &XMCRB)
#define _XMBK		_XMCRB.b7
#define _XMM2		_XMCRB.b2
#define _XMM1		_XMCRB.b1
#define _XMM0		_XMCRB.b0

//XMCRA - PAGE 36
#define _XMCRA (* (volatile bits *) &XMCRA)
#define _SRE		_XMCRA.b7
#define _SRL2		_XMCRA.b6
#define _SRL1		_XMCRA.b5
#define _SRL0		_XMCRA.b4
#define _SRW11		_XMCRA.b3
#define _SRW10		_XMCRA.b2
#define _SRW01		_XMCRA.b1
#define _SRW00		_XMCRA.b0

//TIMSK5
#define _TIMSK5 (* (volatile bits *) &TIMSK5)
#define _ICIE5		_TIMSK5.b5
#define _OCIE5C		_TIMSK5.b3
#define _OCIE5B		_TIMSK5.b2
#define _OCIE5A		_TIMSK5.b1
#define _TOIE5		_TIMSK5.b0

//TIMSK4
#define _TIMSK4 (* (volatile bits *) &TIMSK4)
#define _ICIE4		_TIMSK4.b5
#define _OCIE4C		_TIMSK4.b3
#define _OCIE4B		_TIMSK4.b2
#define _OCIE4A		_TIMSK4.b1
#define _TOIE4		_TIMSK4.b0

//TIMSK3
#define _TIMSK3 (* (volatile bits *) &TIMSK3)
#define _ICIE3		_TIMSK3.b5
#define _OCIE3C		_TIMSK3.b3
#define _OCIE3B		_TIMSK3.b2
#define _OCIE3A		_TIMSK3.b1
#define _TOIE3		_TIMSK3.b0

//TIMSK2
#define _TIMSK2 (* (volatile bits *) &TIMSK2)
#define _OCIE2B		_TIMSK2.b2
#define _OCIE2A		_TIMSK2.b1
#define _TOIE2		_TIMSK2.b0

//TIMSK1
#define _TIMSK1 (* (volatile bits *) &TIMSK1)
#define _ICIE1		_TIMSK1.b5
#define _OCIE1C		_TIMSK1.b3
#define _OCIE1B		_TIMSK1.b2
#define _OCIE1A		_TIMSK1.b1
#define _TOIE1		_TIMSK1.b0

//TIMSK0
#define _TIMSK0 (* (volatile bits *) &TIMSK0)
#define _OCIE0B		_TIMSK0.b2
#define _OCIE0A		_TIMSK0.b1
#define _TOIE0		_TIMSK0.b0

//PCMSK - PAGE 113
#define _PCMSK2 (* (volatile bits *) &PCMSK2)
#define _PCINT23	_PCMSK2.b7
#define _PCINT22	_PCMSK2.b6
#define _PCINT21	_PCMSK2.b5
#define _PCINT20	_PCMSK2.b4
#define _PCINT19	_PCMSK2.b3
#define _PCINT18	_PCMSK2.b2
#define _PCINT17	_PCMSK2.b1
#define _PCINT16	_PCMSK2.b0

#define _PCMSK1 (* (volatile bits *) &PCMSK1)
#define _PCINT15	_PCMSK1.b7
#define _PCINT14	_PCMSK1.b6
#define _PCINT13	_PCMSK1.b5
#define _PCINT12	_PCMSK1.b4
#define _PCINT11	_PCMSK1.b3
#define _PCINT10	_PCMSK1.b2
#define _PCINT09	_PCMSK1.b1
#define _PCINT08	_PCMSK1.b0

#define _PCMSK0 (* (volatile bits *) &PCMSK0)
#define _PCINT07	_PCMSK0.b7
#define _PCINT06	_PCMSK0.b6
#define _PCINT05	_PCMSK0.b5
#define _PCINT04	_PCMSK0.b4
#define _PCINT03	_PCMSK0.b3
#define _PCINT02	_PCMSK0.b2
#define _PCINT01	_PCMSK0.b1
#define _PCINT00	_PCMSK0.b0

//EICRB - PAGE 110
#define _EICRB (* (volatile bits *) &EICRB)
#define _ISC71		_EICRB.b7
#define _ISC70		_EICRB.b6
#define _ISC61		_EICRB.b5
#define _ISC60		_EICRB.b4
#define _ISC51		_EICRB.b3
#define _ISC50		_EICRB.b2
#define _ISC41		_EICRB.b1
#define _ISC40		_EICRB.b0

//EICRA 
#define _EICRA (* (volatile bits *) &EICRA)
#define _ISC31		_EICRA.b7
#define _ISC30		_EICRA.b6
#define _ISC21		_EICRA.b5
#define _ISC20		_EICRA.b4
#define _ISC11		_EICRA.b3
#define _ISC10		_EICRA.b2
#define _ISC01		_EICRA.b1
#define _ISC00		_EICRA.b0

//PCICR
#define _PCICR (* (volatile bits *) &PCICR)
#define _PCIE2		_PCICR.b2
#define _PCIE1		_PCICR.b1
#define _PCIE0		_PCICR.b0

//OSCCAL
#define _OSCCAL OSCCAL

//PRR0 - PAGE 55
#define _PRR0 (* (volatile bits *) &PRR0)
#define _PRTWI		_PRR0.b7
#define _PRTIM2		_PRR0.b6
#define _PRTIM0		_PRR0.b5
#define _PRTIM1		_PRR0.b3
#define _PRSPI		_PRR0.b2
#define _PRUSART0	_PRR0.b1
#define _PRADC		_PRR0.b0

//PRR1 
#define _PRR1 (* (volatile bits *) &PRR1)
#define _PRTIM5		_PRR1.b5
#define _PRTIM4		_PRR1.b4
#define _PRTIM3		_PRR1.b3
#define _PRUSART3	_PRR1.b2
#define _PRUSART2	_PRR1.b1
#define _PRUSART1	_PRR1.b0

//CLKPR - PAGE 48 
#define _CLKPR (* (volatile bits *) &CLKPR)
#define _CLKPCE		_CLKPR.b7
#define _CLKPS3		_CLKPR.b3
#define _CLKPS2		_CLKPR.b2
#define _CLKPS1		_CLKPR.b1
#define _CLKPS0		_CLKPR.b0

//WDTCSR
#define _WDTCSR (* (volatile bits *) &WDTCSR)
#define _WDIF		_WDTCSR.b7
#define _WDIE		_WDTCSR.b6
#define _WDP3		_WDTCSR.b5
#define _WDCE		_WDTCSR.b4
#define _WDE		_WDTCSR.b3
#define _WDP2		_WDTCSR.b2
#define _WDP1		_WDTCSR.b1
#define _WDP0		_WDTCSR.b0

//SREG
#define _SREG (* (volatile bits *) &SREG)
#define _I		_SREG.b7
#define _T		_SREG.b6
#define _H		_SREG.b5
#define _S		_SREG.b4
#define _V		_SREG.b3
#define _N		_SREG.b2
#define _Z		_SREG.b1
#define _C		_SREG.b0

//SPH
#define _SPH	SPH

//SPL
#define _SPL	SPL

//EIND - PAGE 16
#define _EIND	EIND

//RAMPZ - PAGE 16
#define _RAMPZ (* (volatile bits *) &RAMPZ)
#define _RAMPZ1		_RAMPZ.b1
#define _RAMPZ0		_RAMPZ.b0



//SPCR
#define _SPCR (* (volatile bits *) &SPCR)
#define _SPIE		_SPCR.b7
#define _SPE		_SPCR.b6
#define _DORD		_SPCR.b5
#define _MSTR		_SPCR.b4
#define _CPOL		_SPCR.b3
#define _CPHA		_SPCR.b2
#define _SPR1		_SPCR.b1
#define _SPR0		_SPCR.b0

//SPSR
#define _SPSR (* (volatile bits *) &SPSR)
#define _SPIF		_SPSR.b7
#define _WCOL		_SPSR.b6
#define _SPI2X		_SPSR.b0

//SPMCSR - PAGE 323
#define _SPMCSR (* (volatile bits *) &SPMCSR)
#define _SPMIE			_SPMCSR.b7
#define _RWWSB			_SPMCSR.b6
#define _SIGRD			_SPMCSR.b5
#define _RWWSRE			_SPMCSR.b4
#define _BLBSET			_SPMCSR.b3
#define _PGWRT			_SPMCSR.b2
#define _PGERS			_SPMCSR.b1
#define _SPMEN			_SPMCSR.b0

//MCUCR - PAGE 64,108,96,301
#define _MCUCR (* (volatile bits *) &MCUCR)
#define _JTD			_MCUCR.b7
#define _PUD			_MCUCR.b4
#define _IVSEL			_MCUCR.b1
#define _IVCE			_MCUCR.b0

//MCUSR - PAGE 301
#define _MCUSR (* (volatile bits *) &MCUSR)
#define _JTRF		_MCUSR.b4
#define _WDRF		_MCUSR.b3
#define _BORF		_MCUSR.b2
#define _EXTRF		_MCUSR.b1
#define _PORF		_MCUSR.b0

//SMCR - PAGE 50
#define _SMCR (* (volatile bits *) &SMCR)
#define _SM2		_SMCR.b3
#define _SM1		_SMCR.b2
#define _SM0		_SMCR.b1
#define _SE			_SMCR.b0

//ACSR
#define _ACSR (* (volatile bits *) &ACSR)
#define _ACD		_ACSR.b7
#define _ACBG		_ACSR.b6
#define _ACO		_ACSR.b5
#define _ACI		_ACSR.b4
#define _ACIE		_ACSR.b3
#define _ACIC		_ACSR.b2
#define _ACIS1		_ACSR.b1
#define _ACIS0		_ACSR.b0

//OCDR - PAGE 294
#define _OCDR (* (volatile bits *) &OCDR)
#define _OCDR7		_OCDR.b7
#define _OCDR6		_OCDR.b6
#define _OCDR5		_OCDR.b5
#define _OCDR4		_OCDR.b4
#define _OCDR3		_OCDR.b3
#define _OCDR2		_OCDR.b2
#define _OCDR1		_OCDR.b1
#define _OCDR0		_OCDR.b0

//ACSR - PAGE 266
#define _ACSR (* (volatile bits *) &ACSR)
#define _ACD		_ACSR.b7
#define _ACBG		_ACSR.b6
#define _ACO		_ACSR.b5
#define _ACI		_ACSR.b4
#define _ACIE		_ACSR.b3
#define _ACIC		_ACSR.b2
#define _ACIS1		_ACSR.b1
#define _ACIS0		_ACSR.b0

//SPDR -PAGE 199
#define _SPDR		SPDR

//SPSR - PAGE 198
#define _SPSR (* (volatile bits *) &SPSR)
#define _SPIF		_SPSR.b7
#define _WCOL		_SPSR.b6
#define _SPI2X		_SPSR.b0

//SPCR - PAGE 197
#define _SPCR (* (volatile bits *) &SPCR)
#define _SPIE		_SPCR.b7
#define _SPE		_SPCR.b6
#define _DORD		_SPCR.b5
#define _MSTR		_SPCR.b4
#define _CPOL		_SPCR.b3
#define _CPHA		_SPCR.b2
#define _SPR1		_SPCR.b1
#define _SPR0		_SPCR.b0

//GPIOR2	
#define _GPIOR2		GPIOR2
//GPIOR1
#define _GPIOR1		GPIOR1
//GPIOR0 - PAGE 36
#define _GPIOR0		GPIOR0

//GTCCR - PAGE 166, 189
#define _GTCCR (* (volatile bits *) &GTCCR)
#define _TSM			_GTCCR.b7
#define _PSRASY			_GTCCR.b1
#define _PSRSYNC		_GTCCR.b0

//PCIFR - PAGE 113
#define _PCIFR (* (volatile bits *) &PCIFR)
#define _PCIF2		_PCIFR.b2
#define _PCIF1		_PCIFR.b1
#define _PCIF0		_PCIFR.b0

//TIFR5 -PAGE 162
#define _TIFR5 (* (volatile bits *) &TIFR5)
#define _ICF5		_TIFR5.b5
#define _OCF5C		_TIFR5.b3
#define _OCF5B		_TIFR5.b2
#define _OCF5A		_TIFR5.b1
#define _TOV5		_TIFR5.b0

//TIFR4 - 162
#define _TIFR4 (* (volatile bits *) &TIFR4)
#define _ICF4		_TIFR4.b5
#define _OCF4C		_TIFR4.b3
#define _OCF4B		_TIFR4.b2
#define _OCF4A		_TIFR4.b1
#define _TOV4		_TIFR4.b0

//TIFR3 - 162
#define _TIFR3 (* (volatile bits *) &TIFR3)
#define _ICF3		_TIFR3.b5
#define _OCF3C		_TIFR3.b3
#define _OCF3B		_TIFR3.b2
#define _OCF3A		_TIFR3.b1
#define _TOV3		_TIFR3.b0

//TIFR2 - PAGE 188
#define _TIFR2 (* (volatile bits *) &TIFR2)
#define _OCF2B		_TIFR2.b2
#define _OCF2A		_TIFR2.b1
#define _TOV2		_TIFR2.b0

//TIFR1 - PAGE 162
#define _TIFR1 (* (volatile bits *) &TIFR1)
#define _ICF1		_TIFR1.b5
#define _OCF1B		_TIFR1.b2
#define _OCF1A		_TIFR1.b1
#define _TOV1		_TIFR1.b0

//TIFR0 - PAGE 131
#define _TIFR0 (* (volatile bits *) &TIFR0)
#define _OCF0B		_TIFR0.b2
#define _OCF0A		_TIFR0.b1
#define _TOV0		_TIFR0.b0

//EEARH - PAGE 34
#define _EEARH		EEARH
//EEARL
#define _EEARL		EEARL

//EEDR
#define _EEDR		EEDR

//EECR - PAGE 34
#define _EECR (* (volatile bits *) &EECR)
#define _EEPM1		_EECR.b5
#define _EEPM0		_EECR.b4
#define _EERIE		_EECR.b3
#define _EEMPE		_EECR.b2
#define _EEPE		_EECR.b1
#define _EERE		_EECR.b0

//EIFR - PAGE 112
#define _EIFR (* (volatile bits *) &EIFR)
#define _INTF7		_EIFR.b7
#define _INTF6		_EIFR.b6
#define _INTF5		_EIFR.b5
#define _INTF4		_EIFR.b4
#define _INTF3 		_EIFR.b3
#define _INTF2		_EIFR.b2
#define _INTF1		_EIFR.b1
#define _INTF0		_EIFR.b0

//EIMSK - PAGE 111
#define _EIMSK (* (volatile bits *) &EIMSK)
#define _INT7		_EIMSK.b7
#define _INT6		_EIMSK.b6
#define _INT5		_EIMSK.b5
#define _INT4		_EIMSK.b4
#define _INT3		_EIMSK.b3
#define _INT2		_EIMSK.b2
#define _INT1		_EIMSK.b1
#define _INT0		_EIMSK.b0

#define POL PORTL // port output
#define PIL PINL  // port input READ
#define PDL DDRL  // port direct OUT

#define POK PORTK
#define PIK PINK
#define PDK DDRK

#define POJ PORTJ
#define PIJ PINJ
#define PDJ DDRJ

#define POH PORTH
#define PIH PINH
#define PDH DDRH

#define POG PORTG
#define PIG PING
#define PDG DDRG

#define POF PORTF
#define PIF PINF
#define PDF DDRF

#define POE PORTE
#define PIE PINE
#define PDE DDRE

#define POD PORTD  
#define PID PIND   
#define PDD DDRD 

#define POC PORTC
#define PIC PINC
#define PDC DDRC

#define POB PORTB
#define PIB PINB
#define PDB DDRB

#define POA PORTA
#define PIA PINA
#define PDA DDRA


//PORTL
#define _POL (* (volatile bits *) &PORTL)
#define POL7		_POL.b7
#define POL6		_POL.b6
#define POL5		_POL.b5
#define POL4		_POL.b4
#define POL3		_POL.b3
#define POL2		_POL.b2
#define POL1		_POL.b1
#define POL0		_POL.b0

//DDRL
#define _PDL (* (volatile bits *) &DDRL)
#define PDL7		_PDL.b7
#define PDL6		_PDL.b6
#define PDL5		_PDL.b5
#define PDL4		_PDL.b4
#define PDL3		_PDL.b3
#define PDL2		_PDL.b2
#define PDL1		_PDL.b1
#define PDL0		_PDL.b0

//PINL
#define _PIL (* (volatile bits *) &PINL)
#define PIL7	_PIL.b7
#define PIL6	_PIL.b6
#define PIL5	_PIL.b5
#define PIL4	_PIL.b4
#define PIL3	_PIL.b3
#define PIL2	_PIL.b2
#define PIL1	_PIL.b1
#define PIL0	_PIL.b0

//PORTK
#define _POK (* (volatile bits *) &PORTK)
#define POK7		_POK.b7
#define POK6		_POK.b6
#define POK5		_POK.b5
#define POK4		_POK.b4
#define POK3		_POK.b3
#define POK2		_POK.b2
#define POK1		_POK.b1
#define POK0		_POK.b0

//DDRK
#define _PDK (* (volatile bits *) &DDRK)
#define PDK7		_PDK.b7
#define PDK6		_PDK.b6
#define PDK5		_PDK.b5
#define PDK4		_PDK.b4
#define PDK3		_PDK.b3
#define PDK2		_PDK.b2
#define PDK1		_PDK.b1
#define PDK0		_PDK.b0

//PINK
#define _PIK (* (volatile bits *) &PINK)
#define PIK7	_PIK.b7
#define PIK6	_PIK.b6
#define PIK5	_PIK.b5
#define PIK4	_PIK.b4
#define PIK3	_PIK.b3
#define PIK2	_PIK.b2
#define PIK1	_PIK.b1
#define PIK0	_PIK.b0

//PORTJ
#define _POD (* (volatile bits *) &PORTD)
//#define POD7		_POD.b7
#define POD6		_POD.b6
#define POD5		_POD.b5
#define POD4		_POD.b4
#define POD3		_POD.b3
#define POD2		_POD.b2
#define POD1		_POD.b1
#define POD0		_POD.b0

//DDRJ
#define _PDD (* (volatile bits *) &DDRD)
//#define PDD7		_PDD.b7
#define PDD6		_PDD.b6
#define PDD5		_PDD.b5
#define PDD4		_PDD.b4
#define PDD3		_PDD.b3
#define PDD2		_PDD.b2
#define PDD1		_PDD.b1
#define PDD0		_PDD.b0

//PINJ
#define _PID (* (volatile bits *) &PIND)
//#define PID7	_PID.b7
#define PID6	_PID.b6
#define PID5	_PID.b5
#define PID4	_PID.b4
#define PID3	_PID.b3
#define PID2	_PID.b2
#define PID1	_PID.b1
#define PID0	_PID.b0

//PORTH
#define _POH (* (volatile bits *) &PORTH)
#define POH7		_POH.b7
#define POH6		_POH.b6
#define POH5		_POH.b5
#define POH4		_POH.b4
#define POH3		_POH.b3
#define POH2		_POH.b2
#define POH1		_POH.b1
#define POH0		_POH.b0

//DDRH
#define _PDH (* (volatile bits *) &DDRH)
#define PDH7		_PDH.b7
#define PDH6		_PDH.b6
#define PDH5		_PDH.b5
#define PDH4		_PDH.b4
#define PDH3		_PDH.b3
#define PDH2		_PDH.b2
#define PDH1		_PDH.b1
#define PDH0		_PDH.b0

//PINH
#define _PIH (* (volatile bits *) &PINH)
#define PIH7	_PIH.b7
#define PIH6	_PIH.b6
#define PIH5	_PIH.b5
#define PIH4	_PIH.b4
#define PIH3	_PIH.b3
#define PIH2	_PIH.b2
#define PIH1	_PIH.b1
#define PIH0	_PIH.b0

//PORTG
#define _POG (* (volatile bits *) &PORTG)
#define POG5		_POG.b5
#define POG4		_POG.b4
#define POG3		_POG.b3
#define POG2		_POG.b2
#define POG1		_POG.b1
#define POG0		_POG.b0

//DDRG
#define _PDG (* (volatile bits *) &DDRG)
#define PDG5		_PDG.b5
#define PDG4		_PDG.b4
#define PDG3		_PDG.b3
#define PDG2		_PDG.b2
#define PDG1		_PDG.b1
#define PDG0		_PDG.b0

//PING
#define _PIG (* (volatile bits *) &PING)
#define PIG5	_PIG.b5
#define PIG4	_PIG.b4
#define PIG3	_PIG.b3
#define PIG2	_PIG.b2
#define PIG1	_PIG.b1
#define PIG0	_PIG.b0

//PORTF
#define _POF (* (volatile bits *) &PORTF)
#define POF7		_POF.b7
#define POF6		_POF.b6
#define POF5		_POF.b5
#define POF4		_POF.b4
#define POF3		_POF.b3
#define POF2		_POF.b2
#define POF1		_POF.b1
#define POF0		_POF.b0

//DDRF
#define _PDF (* (volatile bits *) &DDRF)
#define PDF7		_PDF.b7
#define PDF6		_PDF.b6
#define PDF5		_PDF.b5
#define PDF4		_PDF.b4
#define PDF3		_PDF.b3
#define PDF2		_PDF.b2
#define PDF1		_PDF.b1
#define PDF0		_PDF.b0

//PINF
#define _PIF (* (volatile bits *) &PINF)
#define PIF7	_PIF.b7
#define PIF6	_PIF.b6
#define PIF5	_PIF.b5
#define PIF4	_PIF.b4
#define PIF3	_PIF.b3
#define PIF2	_PIF.b2
#define PIF1	_PIF.b1
#define PIF0	_PIF.b0

//PORTE
#define _POE (* (volatile bits *) &PORTE)
#define POE7		_POE.b7
#define POE6		_POE.b6
#define POE5		_POE.b5
#define POE4		_POE.b4
#define POE3		_POE.b3
#define POE2		_POE.b2
#define POE1		_POE.b1
#define POE0		_POE.b0

//DDRE
#define _PDE (* (volatile bits *) &DDRE)
#define PDE7		_PDE.b7
#define PDE6		_PDE.b6
#define PDE5		_PDE.b5
#define PDE4		_PDE.b4
#define PDE3		_PDE.b3
#define PDE2		_PDE.b2
#define PDE1		_PDE.b1
#define PDE0		_PDE.b0

//PINE
#define _PIE (* (volatile bits *) &PINE)
#define PIE7	_PIE.b7
#define PIE6	_PIE.b6
#define PIE5	_PIE.b5
#define PIE4	_PIE.b4
#define PIE3	_PIE.b3
#define PIE2	_PIE.b2
#define PIE1	_PIE.b1
#define PIE0	_PIE.b0

//PORTD 
#define _POD (* (volatile bits *) &PORTD)
#define POD7		_POD.b7
#define POD6		_POD.b6
#define POD5		_POD.b5
#define POD4		_POD.b4
#define POD3		_POD.b3
#define POD2		_POD.b2
#define POD1		_POD.b1
#define POD0		_POD.b0

//DDRD 
#define _PDD (* (volatile bits *) &DDRD)
#define PDD7		_PDD.b7
#define PDD6		_PDD.b6
#define PDD5		_PDD.b5
#define PDD4		_PDD.b4
#define PDD3		_PDD.b3
#define PDD2		_PDD.b2
#define PDD1		_PDD.b1
#define PDD0		_PDD.b0

//PIND
#define _PID (* (volatile bits *) &PIND)
#define PID7	_PID.b7
#define PID6	_PID.b6
#define PID5	_PID.b5
#define PID4	_PID.b4
#define PID3	_PID.b3
#define PID2	_PID.b2
#define PID1	_PID.b1
#define PID0	_PID.b0

//PORTC
#define _POC (* (volatile bits *) &PORTC)
#define POC6		_POC.b6
#define POC5		_POC.b5
#define POC4		_POC.b4
#define POC3		_POC.b3
#define POC2		_POC.b2
#define POC1		_POC.b1
#define POC0		_POC.b0

//DDRC
#define _PDC (* (volatile bits *) &DDRC)
#define PDC6	_PDC.b6
#define PDC5	_PDC.b5
#define PDC4	_PDC.b4
#define PDC3	_PDC.b3
#define PDC2	_PDC.b2
#define PDC1	_PDC.b1
#define PDC0	_PDC.b0

//PINC
#define _PIC (* (volatile bits *) &PINC)
#define PIC6	_PIC.b6
#define PIC5	_PIC.b5
#define PIC4	_PIC.b4
#define PIC3	_PIC.b3
#define PIC2	_PIC.b2
#define PIC1	_PIC.b1
#define PIC0	_PIC.b0

// PORTB
#define _POB (* (volatile bits *) &PORTB)
#define POB7	_POB.b7
#define POB6	_POB.b6
#define POB5	_POB.b5
#define POB4	_POB.b4
#define POB3	_POB.b3
#define POB2	_POB.b2
#define POB1	_POB.b1
#define POB0	_POB.b0

//DDRB
#define _PDB (* (volatile bits *) &DDRB)
#define PDB7		_PDB.b7
#define PDB6		_PDB.b6
#define PDB5		_PDB.b5
#define PDB4		_PDB.b4
#define PDB3		_PDB.b3
#define PDB2		_PDB.b2
#define PDB1		_PDB.b1
#define PDB0		_PDB.b0

//PINB
#define _PIB (* (volatile bits *) &PINB)
#define PIB7	_PIB.b7
#define PIB6	_PIB.b6
#define PIB5	_PIB.b5
#define PIB4	_PIB.b4
#define PIB3	_PIB.b3
#define PIB2	_PIB.b2
#define PIB1	_PIB.b1
#define PIB0	_PIB.b0

//PORTA
#define _POA (* (volatile bits *) &PORTA)
#define POA7		_POA.b7
#define POA6		_POA.b6
#define POA5		_POA.b5
#define POA4		_POA.b4
#define POA3		_POA.b3
#define POA2		_POA.b2
#define POA1		_POA.b1
#define POA0		_POA.b0

//DDRA
#define _PDA (* (volatile bits *) &DDRA)
#define PDA7		_PDA.b7
#define PDA6		_PDA.b6
#define PDA5		_PDA.b5
#define PDA4		_PDA.b4
#define PDA3		_PDA.b3
#define PDA2		_PDA.b2
#define PDA1		_PDA.b1
#define PDA0		_PDA.b0

//PINA
#define _PIA (* (volatile bits *) &PINA)
#define PIA7	_PIA.b7
#define PIA6	_PIA.b6
#define PIA5	_PIA.b5
#define PIA4	_PIA.b4
#define PIA3	_PIA.b3
#define PIA2	_PIA.b2
#define PIA1	_PIA.b1
#define PIA0	_PIA.b0

#endif
