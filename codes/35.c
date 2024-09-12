#include <stdio.h>
int main() {
    int valor;
    printf("Digite um numero: ");
    scanf("%d", &valor);
    if (valor % 2 == 0) {
        printf("O numero eh par.\n");
    } else {
        printf("O numero eh impar.\n");
    }
    return 0;
}
