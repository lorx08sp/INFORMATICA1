#include <stdio.h>
#include <stdlib.h>

#define RESET       "\033[0m"
#define RED         "\033[31m"

int main()
{
    int num;

    printf(RED"BENVENUTO NEL MENU'\n\n"RESET"SCEGLI UN'OPZIONE\n");
    printf("__________________\n\n");
    printf("1. Opzione 1\n2. Opzione 2\n3. Opzione 3\n");
    printf("__________________\n\n");
    printf("Num opzione:  ");
    scanf("%d", &num);

    switch(num)
    {
        case 1:
            printf("hai scelto l'opzione 1"); 
        case 2:
            printf("hai scelto l'opzione 2"); 
        case 3:
            printf("hai scelto l'opzione 3"); 
        default:
            printf("errore"); 
    }