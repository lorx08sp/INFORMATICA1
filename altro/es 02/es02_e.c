#include "stdio.h"

int main() 
{
    float b1, b2, h, l1, l2, area, perimetro;

    printf("Inserisci la base maggiore (b1): ");
    scanf("%f", &b1);
    printf("Inserisci la base minore (b2): ");
    scanf("%f", &b2);
    printf("Inserisci l'altezza (h): ");
    scanf("%f", &h);
    printf("Inserisci il lato obliquo 1 (l1): ");
    scanf("%f", &l1);
    printf("Inserisci il lato obliquo 2 (l2): ");
    scanf("%f", &l2);

    area = ((b1 + b2) * h) / 2;
    perimetro = b1 + b2 + l1 + l2;

    printf("L'area del trapezio è: %.2f\n", area);
    printf("Il perimetro del trapezio è: %.2f\n", perimetro);
}

