#include <stdio.h>

int main() {
    char lettera;

    printf("Inserisci una lettera: ");
    scanf(" %c", &lettera);

    switch (lettera) {
        case 'L':
        case 'l':
            printf("Lunedi'\n");
            break;
        case 'M':
        case 'm':
            printf("Martedi'\nMercoledi'\n");
            break;
        case 'G':
        case 'g':
            printf("Giovedi'\n");
            break;
        case 'V':
        case 'v':
            printf("Venerdi'\n");
            break;
        case 'S':
        case 's':
            printf("Sabato\n");
            break;
        case 'D':
        case 'd':
            printf("Domenica\n");
            break;
        default:
            printf("Nessun giorno corrisponde alla lettera inserita.\n");
    }

    return 0;
}

