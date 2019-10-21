/**
 * Sa se verfice daca LSB( Cel mai nesemnificativ bit) este setat(este egal cu 1).
 * 
 * Authors: PPT Team
 **/
#include <stdio.h>

int main()
{
    int numar;

    printf("Introduceti un numar: ");
    scanf("%d", &numar);

    if(numar & 1) {
        printf("LSB al %d este setat.\n", numar);
    } else {
        printf("LSB al %d este nestat.\n", numar);
    }
    
    return 0;
}