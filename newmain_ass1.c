/*
 * File:   newmain.c
 * Author: pict
 *
 * Created on 18 January, 2024, 10:03 AM
 */

#include <xc.h>
#include<pic18f458.h>
void main(void) {
    unsigned int diff;

    diff=0;
    diff=0x8C-0x5D;
    TRISD=00;
    PORTD=diff;

    return;
}
