/*
 * File:   newmain.c
 * Author: pict
 *
 * Created on 18 January, 2024, 9:37 AM
 */

#include <xc.h>
#include<pic18f458.h>
void main(void) {
    int sum=0;
    int num[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++)
    {
        sum=sum+num[i];
    }
    TRISD=00;
    PORTD=sum;
    return;
}
