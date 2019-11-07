/**
 * Authors: PPT Team
 **/

#include <stdio.h>

void increase(int* n) 
{
    (*n)++;
}

int main() 
{
    int n = 1;
    printf("Inainte de apel: %d!\n", n);
    increase(n);
    printf("Dupa apel: %d!\n", n);
    return 0;
}
