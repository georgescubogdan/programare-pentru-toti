/**
 * Suma a 3 nr citite de la tastatura.
 * 
 * Authors: PPT Team
 **/
#include <stdio.h>

int main()
{
    int nr1, nr2, nr3, suma = 0;

    printf("Primul numar: ");
    scanf("%d", &nr1);

    printf("Al doilea numar: ");
    scanf("%d", &nr2);

    printf("Al treilea numar: ");
    scanf("%d", &nr3);

    suma = nr1 + nr2 + nr3;
    printf("Suma numerelor este: %d\n", suma);

    return 0;
}
