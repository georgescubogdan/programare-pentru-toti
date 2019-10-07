/**
 * Se citesc 2 numere si o operatie (*,+,-,/). Sa se afiseze rezultatul.
 * 
 * Authors: PPT Team
 **/
#include <stdio.h>

int main()
{
	double nr1, nr2, rezultat = 0;
	char operatie;

	printf("Introduceti primul numar: ");
	scanf("%lf", &nr1);

	printf("Introduceti al doilea numar: ");
	scanf("%lf", &nr2);

	printf("Introduceti operatia: ");
	scanf(" %c", &operatie);

	if (operatie == '+') {
		rezultat = nr1 + nr2;
	} else if (operatie == '-') {
		rezultat = nr1 - nr2;
	} else if (operatie == '*') {
		rezultat = nr1 * nr2;
	} else if (operatie == '/') {
		rezultat = nr1 / nr2;
	}

	printf("Rezultatul operatiei %c intre numerele %lf si %lf este: %lf", operatie, nr1, nr2, rezultat);
	return 0;
}
