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

void ordina(int v[])
{
    for(int i=0; int < N; int ++)
    {
        
    }
}

int main() 
{
    int array[N];
    int v [N]
    int min = -10; 
    int max = 10; 

    srand(time(NULL));

    riempiarrayrand(array, N, min, max);

    ordina(array);

    printf("array:\n");
    for(int i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}

