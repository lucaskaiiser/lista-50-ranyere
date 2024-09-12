#include <stdio.h>

void fibo(int n) {
    int a = 0, b = 1, next;
    printf("%d e %d ", a, b);
    for (int i = 2; i < n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int valor;
    printf("Digite um numero: ");
    scanf("%d", &n);
    fibo(valor);
    return 0;
}
