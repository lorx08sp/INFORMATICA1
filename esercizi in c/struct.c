#include "stdio.h"
#define N 1
#define V 3
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
    int voti[V]
}typedef persona;

void stampa(persona s[]);
void caricatabella(persona s[]);

int main()
{
    persona studenti[N];
    caricatabella(studenti);
    stampa(studenti);
    return 0;
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

        printf("inserisci 3 voti\n");
        for(int j=0; j<V; j++)
        {
            scanf("%d", &s[i].voti[j]);
        }

    printf("\n");
    }
   
}

void stampa(persona s[])
{
    for(int i=0; i<N; i++)
    {
        
        printf("cognome: %s\n", s[i].cognome);

        printf("data di nascita: %d/%d/%d\n", s[i].nascita.giorno, s[i].nascita.mese, s[i].nascita.anno);

        printf("voti: \n");
        for(int j=0; j<V; j++)
        {
            printf("%d\n", s[i].voti[j]);
        }

        printf("\n");
    }
        
    }