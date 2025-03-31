#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[15];
    int numero, trovato = 0;

    // Inizializzazione del generatore di numeri casuali
    srand(time(NULL));

    // Riempire l'array con numeri casuali tra 0 e 20
    printf("Array generato: ");
    for (int i = 0; i < 15; i++) {
        array[i] = rand() % 21; // Numeri tra 0 e 20
        printf("%d ", array[i]);
    }
    printf("\n");

    // Chiedere all'utente un numero da cercare
    printf("Inserisci un numero da cercare: ");
    scanf("%d", &numero);

    // Ricerca del numero nell'array
    for (int i = 0; i < 15; i++) {
        if (array[i] == numero) {
            printf("Numero trovato in posizione %d\n", i);
            trovato = 1;
        }
    }

    // Se il numero non è stato trovato
    if (!trovato) {
        printf("Numero non presente nell'array.\n");
    }

    return 0;
}
