/**
 * Media a n numere reale pozitive cu o precizie de 3 zecimale.
 *
 * Authors: PPT Team
 **/
#include <stdio.h>

int main()
{
    float suma, numar, medie;
	int count = 0;

	printf("Dati un numar: ");
	scanf("%f", &numar);

	while (numar >= 0)
	{
		suma += numar;
		count++;
		printf("Dati alt numar: ");
		scanf("%f", &numar);
	}

	medie = suma / count;
	printf("Sunt %d numere, cu suma: %0.3f, iar media aritmetica este %0.3f cu o precizie de 3 zecimale\n", count, suma, medie);

	return 0;
}