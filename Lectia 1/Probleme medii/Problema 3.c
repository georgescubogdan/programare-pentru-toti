#include <stdio.h>

int main()
{
	int numar, suma = 0;
	
	printf("Dati un numar: ");
	scanf("%d", &numar);
	
	while (numar != -1)
	{
		suma += numar;
		printf("Dati alt numar: ");
		scanf("%d", &numar);
	}
	
	printf("Suma numerelor este: %d\n", suma);
	
	return 0;
}
