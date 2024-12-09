#include <stdio.h>

int main ()
{
	int a;
	int b;


	printf("dammi 2 numeri interi\n");
	scanf("%d%d", &a, &b);
	
	if (a==b)
	{
		printf("i due numeri sono uguali");
	}
	else
	{
		if (a<b)
		{
			printf("%d e' il numero piu' grande", b);
		}
		else
		{
			printf("%d e' il numero piu' grande", a);
		}
	}
}

