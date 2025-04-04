#include <stdio.h>

#define DIM 5  // Dimensione della griglia
#define L_NAVE 3 // Lunghezza della nave

void initG(int g[DIM][DIM]) {
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            g[i][j] = 0;
        }
    }
}

void stampaG(int g[DIM][DIM], int mostraNave) {
    printf("  0 1 2 3 4\n");
    for (int i = 0; i < DIM; i++) {
        printf("%d ", i);
        for (int j = 0; j < DIM; j++) {
            if (!mostraNave && g[i][j] == 1)
                printf("~ ");
            else if (g[i][j] == 2)
                printf("X ");
            else if (g[i][j] == 3)
                printf("O ");
            else
                printf("~ ");
        }
        printf("\n");
    }
}

void posNave(int g[DIM][DIM]) {
    int x = 1; // Posizione fissa per evitare srand
    int y = 1;
    int dir = 0; // 0 = orizzontale
    for (int i = 0; i < L_NAVE; i++) {
        int nx = x + (dir == 1 ? i : 0);
        int ny = y + (dir == 0 ? i : 0);
        g[nx][ny] = 1;
    }
}

int att(int g[DIM][DIM], int x, int y) {
    if (g[x][y] == 1) {
        g[x][y] = 2;
        return 1;
    } else if (g[x][y] == 0) {
        g[x][y] = 3;
        return 0;
    }
    return -1;
}

int vittoria(int g[DIM][DIM]) {
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            if (g[i][j] == 1) return 0;
        }
    }
    return 1;
}

int main() {
    int g[DIM][DIM];
    initG(g);
    posNave(g);
    
    int tentativi = 0;
    while (1) {
        stampaG(g, 0);
        printf("Inserisci coordinate attacco (es. 1 2): ");
        int x, y;
        scanf("%d %d", &x, &y);
        if (x < 0 || x >= DIM || y < 0 || y >= DIM) {
            printf("Coordinate non valide! Riprova.\n");
            continue;
        }
        tentativi++;
        int res = att(g, x, y);
        if (res == -1) {
            printf("Hai già attaccato questa posizione!\n");
            continue;
        } else if (res == 1) {
            printf("Colpito!\n");
        } else {
            printf("Acqua!\n");
        }
        if (vittoria(g)) {
            printf("Hai affondato la nave in %d tentativi!\n", tentativi);
            stampaG(g, 1);
            break;
        }
    }
    return 0;
}
