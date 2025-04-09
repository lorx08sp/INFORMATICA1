#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIMENSIONE 5
#define LUNGHEZZA_NAVE 3

/* Prototipi delle funzioni */
void inizializzaCampo(char campo[DIMENSIONE][DIMENSIONE]);
void visualizzaCampo(char campo[DIMENSIONE][DIMENSIONE], int mostraNave);
void posizionaNave(char campo[DIMENSIONE][DIMENSIONE]);

int main() {
    char campo[DIMENSIONE][DIMENSIONE];

    srand(time(NULL)); // Inizializza il generatore di numeri casuali

    inizializzaCampo(campo);
    posizionaNave(campo);
    visualizzaCampo(campo, 1); // Mostra la nave

    return 0;
}

void inizializzaCampo(char campo[DIMENSIONE][DIMENSIONE]) {
    for (int i = 0; i < DIMENSIONE; i++) {
        for (int j = 0; j < DIMENSIONE; j++) {
            campo[i][j] = '~';
        }
    }
}

void visualizzaCampo(char campo[DIMENSIONE][DIMENSIONE], int mostraNave) {
    printf("    ");
    for (int i = 0; i < DIMENSIONE; i++) {
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 0; i < DIMENSIONE; i++) {
        printf("%d | ", i);
        for (int j = 0; j < DIMENSIONE; j++) {
            if (!mostraNave && campo[i][j] == '#') {
                printf("~ ");
            } else {
                printf("%c ", campo[i][j]);
            }
        }
        printf("|\n");
    }
}

void posizionaNave(char campo[DIMENSIONE][DIMENSIONE]) {
    int direzione = rand() % 2; // 0 = orizzontale, 1 = verticale
    int x, y;

    if (direzione == 0) { // Orizzontale
        x = rand() % DIMENSIONE;
        y = rand() % (DIMENSIONE - LUNGHEZZA_NAVE + 1);
        for (int i = 0; i < LUNGHEZZA_NAVE; i++) {
            campo[x][y + i] = '#';
        }
    } else { // Verticale
        x = rand() % (DIMENSIONE - LUNGHEZZA_NAVE + 1);
        y = rand() % DIMENSIONE;
        for (int i = 0; i < LUNGHEZZA_NAVE; i++) {
            campo[x + i][y] = '#';
        }
    }
}
