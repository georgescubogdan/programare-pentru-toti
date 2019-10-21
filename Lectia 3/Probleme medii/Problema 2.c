/**
 * Sa se seteze toti bitii pari ai unui numar.
 *
 * Authors: PPT Team
 **/

#include <stdio.h>

int main() {

    int number;
    printf("Numarul este: ");
    scanf("%d", &number);

    int i; int solution = 0; int count = 0;

    for (i = number; i > 0; i = i >> 1) {

        if (count & 1 == 1) {
            solution = solution | 1 << count;
        }

        count++;
    }    
    
    solution = solution | number;

    printf("Dupa setarea bitilor pari, numarul este: %d\n", solution);

    return 0;
}