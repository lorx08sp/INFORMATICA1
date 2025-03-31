#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define MAX_VALUE 20

int main() {
    int array[SIZE];
    srand(time(NULL)); // Inizializza il generatore di numeri casuali

    // Popolamento dell'array con numeri casuali tra 0 e MAX_VALUE
    for (int i = 0; i < SIZE; i++) {
        array[i] = rand() % (MAX_VALUE + 1);
    }

    // Stampa dell'istogramma
    printf("Istogramma:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%2d | ", array[i]);
        for (int j = 0; j < array[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
