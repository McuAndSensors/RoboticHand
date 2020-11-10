/*
 * monitor.h
 *
 * Created: 05/05/2017 11:23:25
 *  Author: 
 */ 


#ifndef MONITOR_H_
#define MONITOR_H_

#define BAUD9600   1
#define BAUD19200  2
#define BAUD28800  3
#define BAUD38400  4
#define BAUD57600  6

void monitorSetup(uint8_t baud);
uint8_t monitorWrite(char data);
uint8_t monitorRead();


#endif /* MONITOR_H_ */