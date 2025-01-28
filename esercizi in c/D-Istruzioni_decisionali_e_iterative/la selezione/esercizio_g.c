#include <stdio.h>

int main() {
    char c;

    // Leggere il carattere
    printf("Inserisci un carattere: ");
    scanf("%c", &c);

    // Visualizzare il carattere e i codici ASCII
    printf("Carattere: %c\n", c);
    printf("Codice ASCII (decimale): %d\n", c);
    printf("Codice ASCII (esadecimale): %X\n", c);

    return 0;
}

