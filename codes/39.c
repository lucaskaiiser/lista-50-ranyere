#include <stdio.h>
int main() {
    int n, a = 0, b = 1, temp;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    printf("Sequência de Fibonacci até %d:\n", n);
    while (a <= n) {
        printf("%d ", a);
        temp = a;
        a = b;
        b = temp + b; 
    }
    printf("\n");
    return 0;
}