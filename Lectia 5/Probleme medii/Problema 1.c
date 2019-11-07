/**
 * Authors: PPT Team
 **/

#include<stdio.h>

void rotire(int *a,int *b,int *c)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}

int main()
{
    int a, b, c;
    printf("Dati a, b si c: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("Valorile inainte de rotire:\n");
    printf("a = %d \nb = %d \nc = %d\n",a,b,c);
    rotire(&a, &b, &c);
    printf("Valorile dupa rotire:\n");
    printf("a = %d \nb = %d \nc = %d",a, b, c);
    
    return 0;
}
