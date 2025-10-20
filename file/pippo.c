#include "stdio.h"

int main() 
{
    char nomeFile[] = { "prova.txt" };
    int err; 
    char c;
    FILE *puntaFile;
    err = fopen_s(&puntaFile, nomeFile, "r");
    if (err == 0)
    {
        while (!feof(puntaFile))
        {
            c = fgetc(puntaFile);
            printf("%c", c);

        }
        err = fclose(puntaFile);
    }
    else
    {
        printf("il file non può essere aperto");
    }
    printf("\n");
    
    }