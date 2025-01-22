#include "stdio.h"
void scambio(int *x, int *y);

int main()
{
    int cont;
    for(cont=1;cont<=3;cont++)
    {
        int a, b;
        printf("inserisci 2 numeri\n");
        scanf("%d%d", &a, &b);
        scambio(&a,&b);
        printf("%d %d", a, b);
    }
}

void scambio(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}