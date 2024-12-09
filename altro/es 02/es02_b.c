#include "stdio.h"

int main() 
{
    int b1 = 2;
    int b2 = 5;
    int h = 3;
    int l1 = 8;
    int l2 = 6;
    int area, perimetro;

    area = ((b1 + b2) * h) / 2;
    perimetro = b1 + b2 + l1 + l2;

    printf("L'area del trapezio è: %d\n", area);
    printf("Il perimetro del trapezio è: %d\n", perimetro);

}

