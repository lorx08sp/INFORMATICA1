#include <stdio.h>
#include <string.h>
int main()
{
	int numstudenti;
	char str[100];
	
	printf("la bomba di hiroshima e' caduta?\n\n");
	scanf("%s", str);
	
	if (strcmp (str, "si") == 0)
	{
		numstudenti=26;
		printf("\ngli studenti sono %d\n", numstudenti);
	}
	else 
	{
		printf("\nfullpiece figli di puttana\n");
	}
}
