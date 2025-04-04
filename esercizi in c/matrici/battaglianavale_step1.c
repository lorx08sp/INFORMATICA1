#include <stdio.h>

#define DIMENSIONE 5

/* Prototipi delle funzioni */
void inizializzaCampo(char campo[DIMENSIONE][DIMENSIONE]);
void visualizzaCampo(char campo[DIMENSIONE][DIMENSIONE]);

int main() {
    char campo[DIMENSIONE][DIMENSIONE];
    
    // Inizializza il campo di gioco
    inizializzaCampo(campo);
    
    // Visualizza il campo di gioco
    visualizzaCampo(campo);
    
    return 0;
}

void inizializzaCampo(char campo[DIMENSIONE][DIMENSIONE]) {
    for (int i = 0; i < DIMENSIONE; i++) {
        for (int j = 0; j < DIMENSIONE; j++) {
            campo[i][j] = '~'; // Acqua
        }
    }
}

void visualizzaCampo(char campo[DIMENSIONE][DIMENSIONE]) {
    printf("    ");
    for (int i = 0; i < DIMENSIONE; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    for (int i = 0; i < DIMENSIONE; i++) {
        printf("%d | ", i);
        for (int j = 0; j < DIMENSIONE; j++) {
            printf("%c ", campo[i][j]);
        }
        printf("|\n");
    }
}
