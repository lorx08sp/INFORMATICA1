#include <stdio.h>

int main() {
    int array[10];

    // Inizializzazione dell'array con i primi 10 numeri naturali (1-10)
    printf("Array inizializzato: ");
    for (int i = 0; i < 10; i++) {
        array[i] = i + 1; // Assegna i valori da 1 a 10
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
