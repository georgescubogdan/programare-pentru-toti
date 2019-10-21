/**
 * Sa se verifice daca un numar e par sau impar.
 * 
 * Authors: PPT Team
 **/
#include <stdio.h>

int main()
{
    int numar;

    printf("Introduceti numarul: ");
    scanf("%d", &numar);

    if(numar & 1) {
        printf("%d este impar.\n", numar);
    } else {
        printf("%d este par.\n", numar);
    }

    return 0;
}