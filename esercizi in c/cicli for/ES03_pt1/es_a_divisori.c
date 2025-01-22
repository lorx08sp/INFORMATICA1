#include <stdio.h>

int main() {
    int numero, i;

    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    printf("I divisori di %d sono:\n", numero);

    for (i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

