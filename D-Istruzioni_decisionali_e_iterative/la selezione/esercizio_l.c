#include <stdio.h>

int main() {
    float reddito_lordo, tasse = 0, reddito_netto;

    printf("Inserisci il reddito annuo lordo: ");
    scanf("%f", &reddito_lordo);

    if (reddito_lordo <= 10000) {
        tasse = 0;
    } else if (reddito_lordo <= 30000) {
        tasse = (reddito_lordo - 10000) * 0.10;
    } else if (reddito_lordo <= 60000) {
        tasse = (30000 - 10000) * 0.10 + (reddito_lordo - 30000) * 0.20;
    } else {
        tasse = (30000 - 10000) * 0.10 + (60000 - 30000) * 0.20 + (reddito_lordo - 60000) * 0.30;
    }

    reddito_netto = reddito_lordo - tasse;

    printf("Tasse totali da pagare: %.2f euro\n", tasse);
    printf("Reddito netto: %.2f euro\n", reddito_netto);

    return 0;
}

