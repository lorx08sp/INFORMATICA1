#include <stdio.h>

int main() {
    int tipo_prodotto, quantita;

    printf("Inserisci il tipo di prodotto (1-4): ");
    scanf("%d", &tipo_prodotto);
    printf("Inserisci la quantit� desiderata: ");
    scanf("%d", &quantita);

    switch (tipo_prodotto) {
        case 1:
            if (quantita > 50) {
                printf("Errore: la quantit� richiesta per il prodotto 1 non pu� essere superiore a 50 unit�.\n");
            } else {
                printf("Prodotto 1 disponibile. Quantit� ordinata: %d unit�.\n", quantita);
            }
            break;
        case 2:
            if (quantita > 100) {
                printf("Errore: la quantit� richiesta per il prodotto 2 non pu� essere superiore a 100 unit�.\n");
            } else {
                printf("Prodotto 2 disponibile. Quantit� ordinata: %d unit�.\n", quantita);
            }
            break;
        case 3:
            if (quantita > 25) {
                printf("Errore: la quantit� richiesta per il prodotto 3 non pu� essere superiore a 25 unit�.\n");
            } else {
                printf("Prodotto 3 disponibile. Quantit� ordinata: %d unit�.\n", quantita);
            }
            break;
        case 4:
            if (quantita > 10) {
                printf("Errore: la quantit� richiesta per il prodotto 4 non pu� essere superiore a 10 unit�.\n");
            } else {
                printf("Prodotto 4 disponibile. Quantit� ordinata: %d unit�.\n", quantita);
            }
            break;
        default:
            printf("Errore: tipo di prodotto non valido. Inserisci un numero da 1 a 4.\n");
    }

    return 0;
}

