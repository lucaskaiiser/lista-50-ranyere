#include <stdio.h>
int main() {
    int a, b;
    printf("Digite dois numeros: ");
    scanf("%d", &a);
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Valores trocados: a = %d, b = %d\n", a, b);
    return 0;
}
