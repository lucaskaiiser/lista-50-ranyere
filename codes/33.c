#include <stdio.h>

int armstrong(int n) {
    int original = n, soma = 0;
    while (n != 0) {
        int dig = n % 10;
        soma += dig * dig * dig;
        n /= 10;
    }
    return soma == original;
}

int main() {
    int n;
    printf("me informe um numero para verificar se eh armstrong: ");
    scanf("%d", &n);
    if (armstrong(n)) {
        printf("O numero e de Armstrong.\n");
    } else {
        printf("O numero nao e de Armstrong.\n");
    }
    return 0;
}
