#include "stdio.h"
#define N 10
struct data
{
    int giorno;
    int mese;
    int anno;
}typedef data;

struct persona
{
    char cognome[20];
    data nascita;
    int voti[10]
}typedef persona;

void stampa(persona s[]);
void caricatabella(persona s[]);

int main()
{
    persona studenti[N];
    caricatabella(studenti);
}
void caricatabella(persona s[])
{
    for(int i=0; i<N; i++)
    {
        printf("inserisci il cognome\n");
        scanf("%s", s[i].cognome);

        printf("inserisci il giorno di nascita\n");
        scanf("%d", &s[i].nascita.giorno);

        printf("inserisci il mese di nascita\n");
        scanf("%d", &s[i].nascita.mese);

        printf("inserisci l'anno di nascita\n");
        scanf("%d", &s[i].nascita.anno);

        printf("inserisci 10 voti\n");
        for(int j=0; j<10; j++)
        {
            scanf("%d", &s[i].voti[j]);
        }

    printf("\n");
    }
   
}

void stampa(persona s[])
{
    
}