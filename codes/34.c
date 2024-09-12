#include <stdio.h>
int soma_dig(int n) {
    int soma = 0;
    while (n != 0) {
        soma += n % 10;
        n /= 10;
    }
    return soma;
}

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("A soma dos digitos eh: %d\n", soma_dig(n));
    return 0;
}
