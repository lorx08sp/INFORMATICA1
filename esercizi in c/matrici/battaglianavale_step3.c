#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIMENSIONE 5
#define LUNGHEZZA_NAVE 3
#define TENTATIVI 5

/* Prototipi delle funzioni */
void inizializzaCampo(char campo[DIMENSIONE][DIMENSIONE]);
void visualizzaCampo(char campo[DIMENSIONE][DIMENSIONE], int mostraNave);
void posizionaNave(char campo[DIMENSIONE][DIMENSIONE]);
void eseguiSparo(char campo[DIMENSIONE][DIMENSIONE], int tentativi);
int coordinateValide(int riga, int colonna);

int main() {
    char campo[DIMENSIONE][DIMENSIONE];

    srand(time(NULL)); // Inizializza il generatore di numeri casuali

    inizializzaCampo(campo);
    posizionaNave(campo);
    eseguiSparo(campo, TENTATIVI);

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

void eseguiSparo(char campo[DIMENSIONE][DIMENSIONE], int tentativi) {
    int riga, colonna;
    for (int t = 0; t < tentativi; t++) {
        printf("Tentativo %d di %d\n", t + 1, tentativi);
        visualizzaCampo(campo, 0);

        do {
            printf("Inserisci le coordinate di sparo (riga e colonna): ");
            scanf("%d %d", &riga, &colonna);
            if (!coordinateValide(riga, colonna)) {
                printf("Coordinate non valide. Riprova.\n");
            } else if (campo[riga][colonna] == 'X' || campo[riga][colonna] == 'O') {
                printf("Hai gia' sparato in questa posizione. Riprova.\n");
                riga = -1; // Forza il ciclo a ripetere
            }
        } while (!coordinateValide(riga, colonna));

        if (campo[riga][colonna] == '#') {
            campo[riga][colonna] = 'X';
            printf("Colpo a segno!\n");
        } else {
            campo[riga][colonna] = 'O';
            printf("Colpo mancato.\n");
        }
    }

    printf("\nPartita terminata. Campo finale:\n");
    visualizzaCampo(campo, 1);
}

int coordinateValide(int riga, int colonna) {
    return riga >= 0 && riga < DIMENSIONE && colonna >= 0 && colonna < DIMENSIONE;
}
