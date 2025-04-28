

#include "stdio.h"
#include "stdlib.h"

#define N 100


int num_primo(int x);


int main()
{
   

    int x=12, r;
    r = num_primo(x);
    printf("%d\n", r);

}



int num_primo(int x)
{
    int cont, r;
    for(cont=1; cont <= x; cont++)
    {
        if(x % cont == 0)
        {
            r++;
        }
    }
    if(r==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}