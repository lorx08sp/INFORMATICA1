#include "stdio.h"

int mcd(int x, int y);

int main()
{
   int a, b;
   int ris;
   printf("inserisci due numeri per fare l'MCD\n");
   scanf("%d%d", &a, &b);
   ris = mcd(a, b);
   printf("l'MCD = %d\n", ris);
   return 0;
}

int mcd(int x, int y)
{
   while(y!=0)
   {
        int resto = x % y;
        x = y;
        y = resto;
   }
   return x;
}