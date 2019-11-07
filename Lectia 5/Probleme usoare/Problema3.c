/**
 * Authors: PPT Team
 **/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int* v;
    int n, i;
    printf("Dati lungimea vectorului: ");
    scanf("%d", &n);

    v = (int*)calloc(n, sizeof(int));
    for (i = 0; i <= n; i++) {
        v[i] = i;
        printf("v[%d]: %d\n", i, v[i]);
    }
    return 0;
}
