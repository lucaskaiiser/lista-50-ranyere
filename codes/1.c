#include <stdio.h>

int soma(int a, int b) {
    return a+b;
}

int main() {
    int numeroA, numeroB;
    printf("digite o primeiro número:");
    scanf("%d", &numeroA);
    printf("digite o segundo número:");
    scanf("%d", &numeroB);
    printf("A soma dos dois é: %d\n", soma(numeroA, numeroB));
}