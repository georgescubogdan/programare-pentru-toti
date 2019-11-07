#include <stdio.h>

void interchange(int* a, int* b) 
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main() 
{
    int a = 1, b = 2;
    printf("Inainte de apel, a = %d si b = %d!\n", a, b);
    interchange(&a, &b);
   printf("Dupa apel, a = %d si b = %d!\n", a, b);
    return 0;
}
