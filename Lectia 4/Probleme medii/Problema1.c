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

int computeSum(int n) 
{
    int i, sum = 0;

    for (i = 1; i <= n; i++) {
        sum += factorial(i) / i; 
    }

    return sum;
}

int main()
{
    int n, result;
    printf("Introduceti un numar: ");
    scanf("%d", &n);
    result = computeSum(n);
    printf("Suma este: %d\n", result);
    return 0 ;
} 
