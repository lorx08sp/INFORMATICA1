#include <stdio.h>

int main() {
    char carattere;

    // Input: Leggi un carattere da tastiera
    printf("Inserisci un carattere: ");
    scanf(" %c", &carattere);

    // Controllo se � una lettera minuscola
    if (carattere >= 'a' && carattere <= 'z') {
        printf("La corrispondente maiuscola �: %c\n", carattere - ('a' - 'A'));
    }
    // Controllo se � una lettera maiuscola
    else if (carattere >= 'A' && carattere <= 'Z') {
        printf("La corrispondente minuscola �: %c\n", carattere + ('a' - 'A'));
    }
    // Altrimenti non � una lettera
    else {
        printf("Non � una lettera.\n");
    }

    return 0;
}

