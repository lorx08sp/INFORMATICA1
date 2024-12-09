#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("Inserisci due numeri interi:\n");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Numeri compresi tra %d e %d:\n", num1, num2);

    int current = num1;
    while (current <= num2) {
        printf("%d ", current);
        current++;
    }

    printf("\n");
    return 0;
}

