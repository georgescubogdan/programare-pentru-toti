/**
 * Authors: PPT Team
 **/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int i, num, sum = 0, max = INT_MIN;
    float *data;
    printf("Numarul de elemente(1 to 100): ");
    scanf("%d", &num);
    
    // Alocare de memorie pentru numarul de elemente citit
    data = (float*) calloc(num, sizeof(float));
    if (data == NULL)
    {
        printf("Eroare!");
        exit(0);
    }
    printf("\n");

    // Citirea numerelor
    for (i = 0; i < num; ++i)
    {
       printf("Enter Number %d: ", i + 1);
       scanf("%f", data + i);
    }

    // Cautarea celui mai mare numar
    for (i = 0; i < num; ++i)
    {
       if (max < *(data + i)) {
           max = *(data + i);
       }
    }

    printf("Numarul cel mai mare este = %d\n", max);
    // Calculul sumei
    for (i = 0; i < num; ++i)
    {
       sum += (max - *(data + i));
    }

    printf("Suma este : %d\n", sum);

    return 0;
}