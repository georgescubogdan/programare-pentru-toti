#include <stdio.h>

int main()
{
	int i, j, m[10][10];
	unsigned long long int produs = 1;
//Initializare
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			m[i][j] = i + j;
		}
	}

//Afisare
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

//Calcul produs
	for (i = 0; i < 10; i++){
		j = 10 - i - 1;       //n = 10
		printf("Aici: %d\n", m[i][j]);
		produs *= m[i][j];
	}

	printf("Produsul elementelor de pe diagonala secundara este: %llu\n", produs);

	return 0;
}
