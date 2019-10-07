/**
 * Gasirea primelor n numere prime.
 * 
 * Authors: PPT Team
 **/
#include<stdio.h>

int main()
{
    int n, i = 3, count, c;

    printf("Numarul de numere prime dorit:  ");
    scanf("%d", &n);

    if (n >= 1)
    {
        printf("Primele %d numere prime sunt:  ", n);
        printf("2 ");
    }

    for (count = 2; count <= n; i++) {
        for(c = 2; c < i; c++) {
            if(i%c == 0)
                break;
        }

        if (c == i) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n");
    return 0;
}