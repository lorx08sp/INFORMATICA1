#include "stdio.h"

int main()
{ 
	int mele, banane, arance, kiwi;
	float prezzo_mele, prezzo_banane, prezzo_arance, prezzo_kiwi;
	float totale_mele, totale_banane, totale_arance, totale_kiwi;
	float subtotale;
	
	mele=2;
	banane=80;
	arance=200;
	kiwi=50;
	
	prezzo_mele=0.50;
	prezzo_banane=0.75;
	prezzo_arance=0.60;
	prezzo_kiwi=0.90;
	
	//printf interfaccia basica
	
	printf("REPORT VENDITE SETTIMANALI\n");
	printf("--------------------------------------------------------------\n");
	printf("Prodotto\t\tQuantita'\tPrezzo\t\tTotale\n");
	printf("--------------------------------------------------------------\n");
	
	//calcoli prezzi totali + printf totali

	printf("Mele\t\t\t       %d\t  %.2f", mele, prezzo_mele);
	totale_mele = prezzo_mele*mele; 
	printf("\t\t     %.0f\n", totale_mele);
	
	printf("Banane\t\t\t      %d\t  %.2f", banane, prezzo_banane);
	totale_banane = prezzo_banane*banane; 
	printf("\t\t    %.0f\n", totale_banane);
	
	printf("Arancie\t\t\t     %d\t  %.2f", arance, prezzo_arance);
	totale_arance = prezzo_arance*arance; 
	printf("\t\t   %.0f\n", totale_arance);
	
	printf("Kiwi\t\t\t      %d\t  %.2f", kiwi, prezzo_kiwi);
	totale_kiwi = prezzo_kiwi*kiwi; 
	printf("\t\t    %.0f\n", totale_kiwi);
	
	//aggiunta del subtotale
	
	subtotale = totale_mele+totale_banane+totale_arance+totale_kiwi;
	printf("\n\n\t\t\t\t\tSUBTOTALE: %.2f euro\n", subtotale);
}

