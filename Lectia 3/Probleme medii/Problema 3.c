/**
 * Sa se gaseasca al n-lea bit.
 * 
 * Authors: PPT Team
 **/
#include <stdio.h>

int main()
{
    int numar, poz, status;

    printf("Introduceti numarul: ");
    scanf("%d", &numar);

    printf("Introduceti pozitia bit-ului: ");
    scanf("%d", &poz);

    poz--;

    status = (numar >> poz) & 1;

    printf("Bitul de pe pozitia %d este %d\n", poz + 1, status);

    return 0;
}
