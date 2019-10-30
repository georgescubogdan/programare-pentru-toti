/**
 * Authors: PPT Team
 **/

#include <stdio.h>

int factorial(int number)
{   
    if (number == 0) {
        return 1;
    }
    return number * factorial(number-1);
}

int main()
{
    int n, result;
    printf("Introduceti un numar: ");
    scanf("%d", &n);
    result = factorial(n);
    printf("Factorialul lui %d este: %d!\n", n, result);
    return 0 ;
} 
