#include <stdio.h>

int main() {
    int numero, i, divisori = 0;

    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    printf("I divisori di %d sono: ", numero);

    // Trova i divisori
    for (i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d ", i);
            divisori++;  // Conta il numero di divisori
        }
    }

    // Determina se il numero � primo
    printf("\n");

    if (divisori == 2) {
        printf("%d � un numero primo.\n", numero);
    } else {
        printf("%d non � un numero primo.\n", numero);
    }

    return 0;
}

