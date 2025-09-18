#include "stdio.h"

#define N 100
#define B 10

struct s_stud
{
    char cog[N];
    char nome[N];
    int voti[B];
}typedef s_stud;



int main()
{
    s_stud s1, s2;
    
    printf("inserisci il cognome\n");
    scanf("%s", s1.cog);
    printf("inserisci il nome\n");
    scanf("%s", s1.nome);
   
    for(int i=0; i<B; i++)
    {
        printf("inserisci un voto\n");
        scanf("%d",&s1.voti[i]);
    }

    s1=s2;
    printf("il cognome è: %s\n", s1.cog);
    printf("il nome è: %s\n", s1.nome);
    printf("i voti sono: ", s1.voti);
    return 0;
}