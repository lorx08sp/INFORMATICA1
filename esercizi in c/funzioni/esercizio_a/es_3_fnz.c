#include <stdio.h> 
int sommaDivisori(int num) 
{ 
    int somma = 0; 
        for (int i = 1; i <= num; i++) 
        { 
    if (num % i == 0) { somma += i; } 
} 
return somma; 
} int main() { int numero; printf("Inserisci un numero intero: "); scanf("%d", &numero); int risultato = sommaDivisori(numero); printf("La somma dei divisori di %d è: %d\n", numero, risultato); return 0; }