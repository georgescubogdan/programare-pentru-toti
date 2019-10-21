/**
 * Sa se verifice daca MSB( Cel mai semnificativ bit) este setat.
 * 
 * Authors: PPT Team
 * max_int = 2147483647
 **/

#include <stdio.h>
#define BITS sizeof(int) * 8

int main()
{
    int numar, MSB;

    printf("Introduceti un numar: ");
    scanf("%d", &numar);

    MSB = 1 << (BITS - 1);

    if(numar & MSB) {
        printf("MSB al %d este setat.\n", numar);
    } else {
        printf("MSB al %d este nesetat.\n", numar);
    }

    return 0;
}