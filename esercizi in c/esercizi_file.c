#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int avv_file();
int correggi_num();

int main()
{
    srand(time(NULL));
    avv_file();
    correggi_num();
    return 0;
}

int avv_file()
{
    FILE *f = fopen("numeri.dat", "wb");
    if(f == NULL)
    {
        printf("err apertura file");
        return 1;
    }
    
    
        for(int i=0; i<20; i++)
        {
            int r = rand() % 101;
            fwrite(&r, sizeof(int), 1, f);
            
        }
        
        fclose(f);
        return 0;
}

int correggi_num()
{
    FILE *f = fopen("numeri.dat", "rb+");
    if(f == NULL)
    {
        printf("err apertura file");
        return 1;
    }
    int nuovo = 42;
    fseek(f, 2 * sizeof(int), SEEK_SET);
    fwrite(&nuovo, sizeof(int), 1, f);
    
    fclose(f);
    return 0;
}