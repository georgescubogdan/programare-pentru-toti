/**
 * Suma cifrelor unui numar.
 * 
 * Authors: PPT Team
 **/
#include <stdio.h>

int main()
{
    int numar, cifra, suma = 0;

    printf("Introduceti un numar: ");
    scanf("%d", &numar);
    
    while (numar != 0)
    {
        cifra = numar % 10;
        suma += cifra;
        numar = numar / 10;
    }

    printf("Suma cifrelor este: %d\n", suma);

    return 0;
 }
