/**
 * Authors: PPT Team
 **/
#include <stdio.h>

int main()
{
	int i, j, suma = 0, m[10][10];

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

//Calcul suma
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			if (i == j){
				suma += m[i][j];
			}
		}
	}

	printf("Suma elementelor de pe diagonala principala este: %d\n", suma);

	return 0;
}
