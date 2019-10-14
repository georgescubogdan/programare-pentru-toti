
#include <stdio.h>

 
int main()
{
    int m[4][4];
    int i,j,r,c;
//Citire
    for(i = 0;i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("Inroduceti elementul [%d,%d] : ", i+1, j+1);
            scanf("%d",&m[i][j]);
        }
    }

 //Afisare
    printf("Matricea este: \n");   
    for(i = 0;i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
 
 
//Calculul transpusei
    printf("Matricea transupsa este: \n");
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d\t",m[j][i]);
        }
        printf("\n");      
    }
    return 0;       
}
