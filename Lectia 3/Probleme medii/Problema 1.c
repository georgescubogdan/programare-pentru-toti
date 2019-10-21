/**
 * Sa se numere toate zerourile si toti bitii setati dintr-un numar dat.
 * 
 * Authors: PPT Team
 **/
#include <stdio.h>
#define INT_SIZE sizeof(int) * 8 
int main()
{
    int numar, biti_zero, biti_setati,i;

    printf("Introduceti un numar: ");
    scanf("%d", &numar);

    biti_zero = 0;
    biti_setati = 0;

    for(i = 0; i < INT_SIZE; i++) {
        
        if(numar & 1) {
            biti_setati++;
        } else {
            biti_zero++;
        }

        numar >>= 1;
    }

    printf("Numarul total de biti zero %d\n", biti_zero);
    printf("Numarul total de biti setati %d\n", biti_setati);

    return 0;
}