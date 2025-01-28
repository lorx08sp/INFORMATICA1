#include "stdio.h"

int area_rettangolo(int x, int y);

int main()
{
   int a, b;
   int ris;
   printf("inserisci la base\n");
   scanf("%d", &b);
   printf("inserisci l'altezza\n");
   scanf("%d", &a);
   ris = area_rettangolo(a, b);
   printf("l'area del rettangolo = %d\n", ris);
   return 0;
}

int area_rettangolo(int x, int y)
{
    x = x*y;
    return x;
}