#include "stdio.h"

int main() 
{
    int a, b, c, x;
    int risultato;

    printf("Inserisci il coefficiente a: ");
    scanf("%d", &a);
    printf("Inserisci il coefficiente b: ");
    scanf("%d", &b);
    printf("Inserisci il coefficiente c: ");
    scanf("%d", &c);
    printf("Inserisci il valore di x: ");
    scanf("%d", &x);

    risultato = (a * x * x) + (b * x) + c;

    printf("Il valore del polinomio %dx^2 + %dx + %d in x = %d e': %d\n", a, b, c, x, risultato);
}

