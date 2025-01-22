#include "stdio.h"
int main()
{
	int num,minore,maggiore;
	do	
	{
		printf("inserisci un numero\n");
		printf("inserisci '0' per terminare e sapere il numero maggiore inserito e il minore\n");
		
		scanf("%d", &num);
		
		if (num>maggiore)
		{
			maggiore=num;
		}
		if(num<minore)
		{
			minore=num;
		}
	}
	while (num!=0);
	printf("il numero maggiore e' %d\nil numero minore e' %d",maggiore,minore);
}
