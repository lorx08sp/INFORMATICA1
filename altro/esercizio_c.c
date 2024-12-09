#include "stdio.h"

int main() 
{
    int n, i;

    printf("Inserisci un numero intero: ");
    scanf("%d", &n);

    if (n == 0) 
	{
        printf("Il numero 0 non ha divisori (eccetto 0 stesso).\n");
    } 
	else 
	{
        printf("I divisori di %d sono: ", n);
        for (i = 1; i <= n; i++) 
		{
            if (n % i == 0) 
			{
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}

