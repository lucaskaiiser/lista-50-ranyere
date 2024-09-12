#include <stdio.h>

int Tri_Ret(int a, int b, int c) {
    return (a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b);
}

int main() {
    int a, b, c;
    printf("Digite tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);
    if (Tri_Ret(a, b, c)) {
        printf("Os numeros formam um triangulo retangulo.\n");
    } else {
        printf("Os numeros nao formam um triangulo retangulo.\n");
    }
    return 0;
}
