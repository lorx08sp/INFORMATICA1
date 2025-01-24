#include "stdio.h"
int menu(void);
int mcd(int x, int y);
int fattoriale(int x);
int somma(int x);
int main()
{
    int scelta;
    int num1, num2;
    int ris;
    do
    {
        scelta = menu();
        switch (scelta)
        {
            case 0:
                printf("Buona giornata!\n"); break;
            case 1:
                printf("inserisci 2 numeri\n");
                scanf("%d%d", &num1, &num2);
                ris = mcd(num1, num2);
                printf("MCD fra %d e %d = %d\n\n", num1, num2, ris);

                break;
            case 2:
                printf("inserisci un numero\n");
                scanf("%d", &num1);
                ris = fattoriale(num1);
                printf("il fattoriale di %d = %d\n\n", num1, ris);
                
                break;
            case 3:
                printf("inserisci quanti numeri vuoi sommare\n");
                scanf("%d", &num1);
                ris = somma(num1);
                printf("la somma dei tuoi %d numeri = %d\n\n", num1, ris);

                break;
            default:
                printf("non esiste l'opzione che hai scelto\n\n");
        }
    } while(scelta!=0);
}
int menu(void)
{
    int risp;
    printf("digita 1 se vuoi fare l'MCD\n");
    printf("digita 2 se vuoi fare il fattoriale\n");
    printf("digita 3 se vuoi fare la somma\n");
    printf("digita 0 per uscire\n");
    scanf("%d", &risp);

    return risp;
}

int mcd(int x, int y)
{
    while(x!=y)
    {
        if(x>y)
        {
            x-=y;
        }
        else
        {
            y-=x;
        }
    }
    return x;
}

int fattoriale(int x)
{
    int cont, ris=1;
    for(cont=1; cont<=x; cont++)
    {
        ris*=cont;
    }
    return ris;
}

int somma(int x)
{
    int cont;
    int num1, ris=0;
    printf("inserisci %d numeri\n", x);
    for(cont=0; cont<x; cont++)
    {
        scanf("%d", &num1);
        ris+=num1;
    }
    return ris;
}
