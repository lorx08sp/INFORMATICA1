#include "stdio.h"
int main()
{
	int media, crediti, tot;
	
	printf("inserisci la media\n");
	scanf("%d", &media);
	printf("\ninerisci il numero di crediti\n");
	scanf("%d", &crediti);
	
	if (media >= 28 && crediti > 24)
	{
		tot=media+2;
	}
	else 
	{
		if (media>=25 && media<=27 && crediti>=18 && crediti<=24)
		{
			tot=media+1;
		}
		else
		{
			tot=media;
		}
	}
	
	printf("\nil tuo voto finale e' %d", tot);
	
}
