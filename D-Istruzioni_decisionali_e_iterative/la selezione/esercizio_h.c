#include <stdio.h>

int main() {
    char carattere;

    // Input: Leggi un carattere da tastiera
    printf("Inserisci un carattere: ");
    scanf(" %c", &carattere);

    // Controllo se è una lettera minuscola
    if (carattere >= 'a' && carattere <= 'z') {
        printf("La corrispondente maiuscola è: %c\n", carattere - ('a' - 'A'));
    }
    // Controllo se è una lettera maiuscola
    else if (carattere >= 'A' && carattere <= 'Z') {
        printf("La corrispondente minuscola è: %c\n", carattere + ('a' - 'A'));
    }
    // Altrimenti non è una lettera
    else {
        printf("Non è una lettera.\n");
    }

    return 0;
}

