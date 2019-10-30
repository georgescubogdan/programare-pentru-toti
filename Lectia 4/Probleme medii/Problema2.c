/**
 * Authors: PPT Team
 **/

#include <stdio.h>

int cmmdc(int n1, int n2)
{
    if (n2 != 0)
       return cmmdc(n2, n1%n2);
    else 
       return n1;
}

int main()
{
   int n1, n2;
   printf("Introduceti 2 numere: ");
   scanf("%d %d", &n1, &n2);
   printf("C.M.M.D.C al lui %d si al lui %d este %d.\n", n1, n2, cmmdc(n1,n2));
   return 0;
}
