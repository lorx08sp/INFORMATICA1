#include <stdio.h>

int somma_divisori(int n);

int main() 
{
    int n, ris;
    printf("Inserisci un numero intero: ");
    scanf("%d", &n);
    ris = somma_divisori(n);
    printf("La somma dei divisori di %d è: %d\n", n, ris);
    return 0;
}

int somma_divisori(int n) 
{
    int somma = 0;
    for (int i = 1; i <= n; i++) 
    {
        if (n % i == 0) 
        {
            somma += i;
        }
    }
    return somma;
}
