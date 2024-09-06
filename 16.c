#include <stdio.h>

// verificar porque só funciona para valores até 10 digitos

int len(long int number){
    int counter = 0;
    while (number > 1) {
        printf("%ld\n", number);
        number = number/10;
        counter += 1;
    }
    return counter+1;
}

int main() {
    printf("digite um número: ");
    int number;
    scanf("%d", &number);
    printf("O número tem %d digitos!\n", len(number));
}