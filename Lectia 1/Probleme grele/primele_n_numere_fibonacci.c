/**
 * Gasirea primelor n numere din sirul lui fibonacci.
 *
 * Authors: PPT Team
 **/
#include <stdio.h>

int main()
{
    int f1 = 0, f2 = 1, i, n;

    printf("Numarul de elemente din sirul lui Fibonacci:  ");
    scanf("%d", &n);

    if (n < 1) {
        return 0;
    }

    for (i = 1; i <= n; i++) {
        printf("%d ", f2);
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }

    printf("\n");
    return 0;
}