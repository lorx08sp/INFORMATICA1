#include "stdio.h"

float media (int, int);

int main()
{
    float r;
    int a,b; 
    // inserire il for per far si che quando fa la media lo chieda un'altra volta
    printf("inserisci due numeri per fare la media\n");
    scanf("%d%d", &a, &b);
    r = media(a,b);
    printf("la media e' %.2f", r);
}

float media (int x, int y)
{
    return (x+y)/2.0;
}
