#include <stdio.h>

int main() 
{
    int N;
    int fattoriale = 1;

    // Chiedere all'utente di inserire un numero
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &N);

    // Verifica che il numero inserito sia positivo
    if (N < 0) 
	{
        printf("Il numero deve essere positivo!\n");
    }
	else
	{
		for (int i = 1; i <= N; i++) 
        {
			fattoriale *= i;
    	}
	}
    // Stampa del risultato
    printf("Il fattoriale di %d è: %d\n", N, fattoriale);

    return 0;
}
