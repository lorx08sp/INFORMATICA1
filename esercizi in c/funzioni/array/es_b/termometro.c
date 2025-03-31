#include <stdio.h>

#define ORE 24

int main() {
    float temperature[ORE];
    float maxTemp, minTemp, media = 0;
    int oraMax = 0, oraMin = 0;

    // Input delle temperature
    printf("Inserisci le temperature per ogni ora:\n");
    for (int i = 0; i < ORE; i++) {
        printf("Ora %2d: ", i);
        scanf("%f", &temperature[i]);
    }

    // Inizializzazione dei valori di riferimento
    maxTemp = minTemp = temperature[0];
    media += temperature[0];

    // Analisi delle temperature
    for (int i = 1; i < ORE; i++) {
        media += temperature[i];
        if (temperature[i] > maxTemp) {
            maxTemp = temperature[i];
            oraMax = i;
        }
        if (temperature[i] < minTemp) {
            minTemp = temperature[i];
            oraMin = i;
        }
    }

    media /= ORE;
    float escursione = maxTemp - minTemp;

    // Output dei risultati
    printf("\nTemperatura massima: %.2f°C alle ore %d\n", maxTemp, oraMax);
    printf("Temperatura minima: %.2f°C alle ore %d\n", minTemp, oraMin);
    printf("Escursione termica: %.2f°C\n", escursione);
    printf("Temperatura media della giornata: %.2f°C\n", media);

    return 0;
}
