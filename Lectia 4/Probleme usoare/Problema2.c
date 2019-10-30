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
    int n, result;
    printf("Introduceti un numar: ");
    scanf("%d", &n);
    result = checkPrime(n);

    if (result == 0) {
        printf("Numarul nu este prim!\n");
    } else {
        printf("Numarul este prim!\n");
    }
    
    return 0 ;
} 
