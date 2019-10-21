/**
 * Authors: PPT Team
 **/
#include <stdio.h>

int main()
{
	int i, v[20];

	for (i = 0; i < 20; i++){
		v[i] = i;
	}

	printf("Elementele vectorului sunt: ");
	
	for (i = 0; i < 20; i++){
		printf("%d ", v[i]);
	
	}
	printf("\n");

	return 0;
}
