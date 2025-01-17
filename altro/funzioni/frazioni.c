#include "stdio.h"

int mcd(int x, int y);
void semplifica(int x, int y, int z);

int main()
{
    int cont;

    for(cont = 1; cont <= 3; cont++)
    {
        int a, b, r;
        printf("inserisci il numeratore e il denominatore\n");
        scanf("%d%d", &a, &b);
        
        r= mcd(a, b);
        semplifica(a, b, r);
    }
    return 0;
}

int mcd(int x, int y)
{
    for(; x!=y;)
    {
        if(x>y)
        {
            x = x-y;
        }
        else
        {
            y = y-x;
        }                                                                     
    }
    return x;
}

void semplifica(int x, int y, int z)
{
    x=x/z;
    y=y/z;

    printf("la frazione semplificata e' %d/%d\n", x, y);
}
