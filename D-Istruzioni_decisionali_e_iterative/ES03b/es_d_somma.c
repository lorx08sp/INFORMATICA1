#include "stdio.h"

int main ()
{
	int num, somma=0, cont=0;
	
	printf("inserisci 10 numeri\n");
	
	for(cont=0;cont<10;cont++)
	{
		scanf("%d", &num);
		somma += num;
	}
	
	printf("la somma dei numeri e': %d", somma);
}