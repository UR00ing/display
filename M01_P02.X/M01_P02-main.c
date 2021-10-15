,/*
 * File:   M01_P02-main.c
 * Author: jose de jesus
 *
 * Created on 11 de septiembre de 2021, 10:41 PM
 */

#define F_CPU 1000000UL
#include <util/delay.h>
#include <avr/io.h>

int main(void) {
    char cuenta;
    DDRA = 0xFF;
    cuenta = 00;
    PORTA = cuenta;
    while (cuenta<255) {
        cuenta = cuenta+1;
        PORTA = cuenta;
        _delay_ms(300);
    }
    while (1){
        
    }
}
