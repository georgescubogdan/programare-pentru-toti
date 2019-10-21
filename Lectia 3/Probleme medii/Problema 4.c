/**
 * Sa se seteze al n-lea bit.
 * 
 * Authors: PPT Team
 **/

#include <stdio.h>

int main()
{
    int numar, poz, numarNou;

    printf("Introduceti numarul: ");
    scanf("%d", &numar);

    printf("Introduceti pozitia bitului: ");
    scanf("%d", &poz);

    poz--;

    numarNou = (1 << poz) | numar;

    printf("Numarul initial %d\n", numar);
    printf("Numarul final %d\n", numarNou);

    return 0;
}