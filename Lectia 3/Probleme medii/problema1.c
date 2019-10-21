#include <stdio.h>

/*
    Set all the even bits of a number to be 1. Starting from the LSB to the MSB.
*/

int main() {

    int number;

    scanf("%d", &number);

    int i; int solution = 0; int count = 0;

    for ( i = number; i > 0; i = i >> 1) {

        if ( count & 1 == 1) {
            solution = solution | 1 << count;
        }

        count++;
    }    
    
    solution = solution | number;

    printf("%d\n", solution);

    return 0;
}