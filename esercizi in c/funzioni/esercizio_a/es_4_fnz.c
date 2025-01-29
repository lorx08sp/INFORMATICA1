#include <stdio.h>

int area_rettangolo(int base, int altezza);
int mcd(int a, int b);
int somma_divisori(int n);
void menu();

int main() 
{
    menu();
    return 0;
}

int area_rettangolo(int base, int altezza) 
{
    return base * altezza;
}

int mcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
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

void menu() 
{
    int scelta;
    do 
    {
        printf("\n                     ______                        ");
        printf("\n ___________________| Menu |_____________________\n|                                                |\n");
        printf("| 1. Calcola l'area di un rettangolo             |\n");
        printf("| 2. Calcola il massimo comune divisore (MCD)    |\n");
        printf("| 3. Calcola la somma dei divisori di un numero  |\n");
        printf("| 0. Esci                                        |\n|________________________________________________|");
        printf("\n\nScegli un'opzione: ");
        scanf("%d", &scelta);

        if (scelta == 1) 
        {
            int base, altezza;
            printf("Inserisci la base del rettangolo: ");
            scanf("%d", &base);
            printf("Inserisci l'altezza del rettangolo: ");
            scanf("%d", &altezza);
            printf("L'area del rettangolo è: %d\n", area_rettangolo(base, altezza));
        } 
        else if (scelta == 2) 
        {
            int a, b;
            printf("Inserisci due numeri interi: ");
            scanf("%d %d", &a, &b);
            printf("Il massimo comune divisore è: %d\n", mcd(a, b));
        } 
        else if (scelta == 3) 
        {
            int n;
            printf("Inserisci un numero intero: ");
            scanf("%d", &n);
            printf("La somma dei divisori di %d è: %d\n", n, somma_divisori(n));
        }
    } while (scelta != 0);
    printf("\nProgramma terminato.\n");
}
