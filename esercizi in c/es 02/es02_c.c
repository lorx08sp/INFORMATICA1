#include "stdio.h"

int main() 
{
    int a, b, c;

    a = 5;
    b = 10;

    printf("Prima dello scambio:\n");
    printf("a = %d, b = %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("Dopo lo scambio:\n");
    printf("a = %d, b = %d\n", a, b);

}
