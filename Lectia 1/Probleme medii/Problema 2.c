/**
 * Se citesc n, n numere si o operatie. Sa se afiseze rezutatul.
 * 
 * Authors: PPT Team
 **/
#include <stdio.h>

int main()
{
	int n, i;
	double temp, rezultat;
	char operatie;

	printf("Dati numarul n: ");
	scanf("%d", &n);

	printf("Introduceti operatia: ");
	scanf(" %c", &operatie);

	printf("Dati primul numar: ");
	scanf("%lf", &rezultat);

	if (operatie == '+')
	{
		for (i = 0; i < n-1; i++)
		{
			printf("Dati inca un numar: ");
			scanf("%lf", &temp);
			rezultat += temp;
		}
	}
	else if (operatie == '-')
	{
		for (i = 0; i < n-1; i++)
		{
			printf("Dati inca un numar: ");
			scanf("%lf", &temp);
			rezultat -= temp;
		}
	}
	else if (operatie == '*')
	{
		for (i = 0; i < n-1; i++)
		{
			printf("Dati inca un numar: ");
			scanf("%lf", &temp);
			rezultat *= temp;
		}
	}
	else if (operatie == '/')
	{
		for (i = 0; i < n-1; i++)
		{
			printf("Dati inca un numar: ");
			scanf("%lf", &temp);
			rezultat /= temp;
		}
	}

	printf("Rezultatul final este: %lf\n", rezultat);

	return 0;
}
