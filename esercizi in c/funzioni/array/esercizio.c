#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define N 50

void riempiarrayrand(int array[], int dimensione, int min, int max) 
{
    for (int i = 0; i < dimensione; i++) 
    {
        array[i] = rand() % (max - min + 1) + min;
    }

}

void dividinumeri(int origine[], int dim, int negativi[], int positivi[])
{
    int dimNeg = 0;
    int dimPos = 0;

    for (int i = 0; i < dim; i++) 
    {
        if (origine[i] < 0) 
        {
            negativi[dimNeg++] = origine[i];
        } 
        else 
        {
            positivi[dimPos++] = origine[i];
        }
    }

    
    for (int i = dimNeg; i < dim; i++) 
    {
        negativi[i] = 0;
    }
    for (int i = dimPos; i < dim; i++) 
    {
        positivi[i] = 0;
    }
}

int main() 
{
    int array[N];
    int min = -20; 
    int max = 20; 
    int negativi[N];
    int positivi[N];

    srand(time(NULL));

    riempiarrayrand(array, N, min, max);

    
    dividinumeri(array, N, negativi, positivi);

    printf("array generato:\n");
    for (int i = 0; i < N; i++) 
    {
        printf("%d ", array[i]);
    }
    printf("\n\n\n");


    printf("array numeri positivi:\n");
    for (int i = 0; i < N; i++) 
    {
        printf("%d ", positivi[i]);
    }
    printf("\n\n");

    printf("array numeri negativi:\n");
    for (int i = 0; i < N; i++) 
    {
        printf("%d ", negativi[i]);
    }
    printf("\n\n");

    return 0;
}

