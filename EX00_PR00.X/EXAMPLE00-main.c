/*
 * File:   EXAMPLE00-main.c
 * Author: jose de jesus
 *
 * Created on 21 de septiembre de 2021, 02:57 PM
 */

#define F_CPU 1000000UL
#include <util/delay.h>
#include <avr/io.h>

const char tab[] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x67, 0x77, 0x7C, 0x39, 0x5E, 0x79, 0x71, 0x80};

int main(void) {
    unsigned char dato;
    DDRA= 0xFF;
    dato = 0;
    while (1) {
        PORTA=tab[dato];
        _delay_ms(500);
        dato=dato+1;
        if(dato==17){
            dato=0;
        }
    }
}