/**
 * Authors: PPT Team
 **/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float distanta_euclidiana(float *data, int num)
{
    float sum = 0.0, media, distanta_euclidiana = 0.0;
    int i;
    for(i = 0; i < num; ++i) {
        sum += data[i];
    }
    media = sum / num;
    for(i = 0; i < num; ++i) {
        distanta_euclidiana += pow(data[i] - media, 2);
    }
    return sqrt(distanta_euclidiana / num);
}



int main()
{
    int i, num;
    float *data;
    printf("Numarul de elemente(1 to 100): ");
    scanf("%d", &num);
    // Alocare de memorie pentru numarul de elemente citit
    data = (float*) malloc(num * sizeof(float));
    if(data == NULL)
    {
        printf("Eroare!");
        exit(0);
    }

    printf("Introduceti %d elemente: \n", num);
    for (i = 0; i < num; ++i) {
        scanf("%f", &data[i]);
    }

    printf("\nDistanta euclidiana este %.6f\n", distanta_euclidiana(data, num));
    return 0;
}

