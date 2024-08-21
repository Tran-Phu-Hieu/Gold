/*
 * File:   main1.c
 * Author: gold
 *
 * Created on March 30, 2022, 4:43 PM
 */


#include <xc.h>
#include "user.h"
#define F_CPU 1000000
#include <util/delay.h>

// one wire interface
char OneWireReset(void){
    char Presence;
    OneWire_Master;
    OneWire_Low;
    _delay_us(480);
    OneWire_Free;
    _delay_us(80);
    Presence = OneWire_State;
     _delay_us(60);   
}
OneWireWriteByte(unsigned char Byte)
{
    unsigned char i;
    for (i=0;i<8;i++){
    OneWire_Master;
    if(Byte&0x01){
    OneWire_Low;
    _delay_us(15);
    OneWire_Free;
    _delay_us(45);
    
    }
    }
}

void main(void) {
    OneWireReset
    return;
}
