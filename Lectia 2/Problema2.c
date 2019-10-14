#include <stdio.h>

int main()
{
	int aux, i, v[10];

//Citire de la tastatura
	for (i = 0; i < 10; i++){
		printf("Adaugati un element in vector: ");
		scanf("%d", &aux);
		v[i] = aux;
	}

//Afisare
	printf("Elementele vectorului initial sunt: ");
	for (i = 0; i < 10; i++){
		printf("%d ", v[i]);
	}
	printf("\n");

//Inversare
	for (i = 0; i < 5; i++){ //n = 10, n/2 =5
		aux = v[i];
		v[i] = v[9-i];
		v[9-i] = aux;
	}

//Afisare invers
	printf("Elementele vectorului inversat sunt: ");
	for (i = 0; i < 10; i++){
		printf("%d ", v[i]);
	}
	printf("\n");

	return 0;
}
