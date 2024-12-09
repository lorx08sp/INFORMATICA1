#include <stdio.h>

int main() 
{
    int num = 0;
    int contnum = 0;
    float media = 0;

    printf("Inserisci i numeri per calcolare la media.\n");
    printf("Digita '0' per confermare e terminare l'inserimento.\n");

    do 
	{
        scanf("%d", &num);
        if (num != 0) 
		{
            media += num;
            contnum++;
        }
    } 
	while (num != 0);

    if (contnum > 0) 
	{
        media /= contnum;
        printf("La media è: %.2f\n", media);
    } 
	else 
	{
        printf("Non hai inserito alcun numero valido.\n");
    }

    return 0;
}
