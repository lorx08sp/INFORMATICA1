#include <stdio.h>

int main() {
    int i, j;

    printf("Le coppie ordinate di numeri naturali la cui somma è 15 sono:\n");

    for (i = 0; i <= 15; i++) {
        j = 15 - i;
        if (i <= j) { 
            printf("(%d, %d)\n", i, j);
        }
    }

    return 0;
}

