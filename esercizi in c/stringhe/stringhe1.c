#include "stdio.h"
#include "stdlib.h"

int main() 
{
    /* 
    for(char i='A'; i<='Z' ; i++)
    {
        printf("%c  %d\t", i, i);
    }
        */
    for(int j=0; j<=127; j++)
    {
        printf("%c\t%4d\t%8o\t%8x\n", j, j, j, j);
    }
}