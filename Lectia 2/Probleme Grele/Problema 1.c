/**
 * Authors: PPT Team
 **/
#include <stdio.h>

int main() {

  int i, n, v[100];
  scanf("%d", &n);
  
  for (i = 0; i < 2 * n - 1; i++) {
    scanf("%d", &v[i]);
  }
  
  int numar_cautat = 0;
  
  for (i = 0; i < 2 * n - 1; i++) {
    numar_cautat = numar_cautat ^ v[i];
  }
  
  printf("Numarul cautat este: %d\n", numar_cautat);
  
  return 0;
}
