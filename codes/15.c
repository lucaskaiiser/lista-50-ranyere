#include <stdio.h>
#include <stdlib.h>

int absolute(int number) {
    return abs(number);
}

int main() {
    printf("digite um valor inteiro: ");
    int number;
    scanf("%d", &number);
    printf("O absoluto é: %d", absolute(number));
}