/**
 * Authors: PPT Team
 **/

#include <stdio.h>

int square(int number)
{
    int aux;
    aux = number * number;
    return aux;
    
    /*
    Sau 
    return number * number;
    */
}

int main()
{
    int n, temp;
    printf("Introduceti un numar: ");
    scanf("%d", &n);
    temp = square(n);
    /*
    Sau
    printf("Patratul numarului este: %d\n", square(n));
    */
    printf("Patratul numarului este: %d\n", temp);
    return 0 ;
} 
