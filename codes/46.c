#include <stdio.h>

int c_3(int n) {
    int d, c = 0;
    while (n != 0) {
        d = n % 10;
        if (d == 3) {
            c++;
        }
        n /= 10;
    }
    return c;
}

int main() {
    int n, r;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    r = c_3(n);
    printf("O dígito 3 aparece %d vezes\n", r);
    return 0;
}
