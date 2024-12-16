#include <stdio.h>
#include <stdlib.h>

#define RESET       "\033[0m"
#define RED         "\033[31m"

int main()
{
    int num;

    printf(RED"\n BENVENUTO NEL MENU'\n\n"RESET"  SCEGLI UN'OPZIONE\n");
    printf("_____________________\n\n");
    printf("   1. Opzione 1\n   2. Opzione 2\n   3. Opzione 3\n");
    printf("_____________________\n\n");
    printf("Numero opzione:  ");
    scanf("%d", &num);

    switch(num)
    {
        case 1:
            printf("\nhai scelto l'opzione 1\n\n"); break;
        case 2:
            printf("\nhai scelto l'opzione 2\n\n"); break;
        case 3:
            printf("\nhai scelto l'opzione 3\n\n"); 
        default:
            printf(RED"\nERRORE GRAVISSIMO\n\nHAI SBAGLIATO!!!\n\n"RESET); 
    }
}