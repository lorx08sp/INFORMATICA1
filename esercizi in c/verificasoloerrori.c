#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define R 10
#define C 10

void casualivet(int vet[], int x, int y);
void casualimat(int mat[][C]);
void stampa(int mat[][C]);
int main()
{
    srand(time(NULL));
    int mat[R][C];
    casualimat(mat);
    stampa(mat);
    return 0;
}

void casualivet(int vet[], int x, int y)
{
    for(int i=0; i<C; i++)
    {
        vet[i] = rand() % (y - x)+x;
    }
}

void casualimat(int mat[][C])
{
    for(int j=0; j<R; j++)
    {
        casualivet(mat[j], 20, 57);
    }
}

void stampa(int mat[][C])
{
    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}