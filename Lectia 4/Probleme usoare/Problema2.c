/**
 * Authors: PPT Team
 **/

#include <stdio.h>

int checkPrime(int number)
{   
    int i;
    for (i = 2; i < number/2; i++) {
        if (number % i == 0)
            return 0;
    }
    return 1;

}

int main()
{
    int n, temp;
    printf("Introduceti un numar: ");
    scanf("%d", &n);
    temp = checkPrime(n);

    if (temp == 0) {
        printf("Numarul nu este prim!\n");
    } else {
        printf("Numarul este prim!\n");
    }
    
    return 0 ;
} 
