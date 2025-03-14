#include "stdio.h"

float array[10];
int main()
{
    float somma;
    float media;
    for (int i=0; i<10; i++)
    {
        printf("dammi un nr");
        scanf("%f",&array[i]);
        somma+=array[i];
        media=somma/10.0;
    }
    printf("la media e' %.2f e la somma e' %.2f",media,somma);
    return 0;
}                                                                                           