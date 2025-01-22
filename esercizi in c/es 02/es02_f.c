#include "stdio.h"

int main() 
{
    int a, b, c;

    printf("Inserisci il valore di a: ");
    scanf("%d", &a);
    printf("Inserisci il valore di b: ");
    scanf("%d", &b);

    printf("Prima dello scambio:\n");
    printf("a = %d, b = %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("Dopo lo scambio:\n");
    printf("a = %d, b = %d\n", a, b);
}

