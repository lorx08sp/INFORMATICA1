#include <stdio.h>

int num_cifre(int n);

int main() 
{
    int num, ris;
    printf("inserisci un numero: ");
    scanf("%d", &num);
    ris = num_cifre(num);
    printf("il numero delle cifre = %d\n", ris);
    return 0;
}

int num_cifre(int n) 
{
    int cont=0;
    while(n>0)
    {
        n = n/10;
        cont++;
    }
    return cont;
}
