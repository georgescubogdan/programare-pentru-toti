#include <stdio.h>

int main()
{
	int i, suma = 0, v[20];

	for (i = 0; i < 20; i++){
		v[i] = i;
		suma += v[i];
	}

	printf("Suma elementelor vectorului este: %d\n", suma);

	return 0;
}
