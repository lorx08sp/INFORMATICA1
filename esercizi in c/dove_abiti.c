#include "stdio.h"
#include "string.h"
int main()
{

	char stato[50];
	char provincia[50];
	char comune[50];
	char via[50];
	

	printf("inserisci lo stato\n");
	scanf("%s", stato);
	getchar();
	
	printf("inserisci la provincia\n");
	scanf("%s", provincia);
	getchar();
	
	printf("inserisci il comune\n");
	scanf("%s", comune);
	getchar();
	
	printf("inserisci la via\n");
	fgets(via, sizeof(via), stdin);
	via[strcspn(via, "\n")] = '\0';
	
	printf("il tuo indirizzo e':\n%s, %s, %s, %s",via,comune,provincia,stato);
}
