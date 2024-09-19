#include <stdio.h>
int main() {
 int a, b, c;
 printf("Digite três números inteiros: ");
 scanf("%d %d %d", &a, &b, &c);
 // Verificar se a² + b² = c²
 if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b
* b + c * c == a * a)) {
 printf("Os números podem formar um triângulo retângulo.\n");
 } else {
 printf("Os números não podem formar um triângulo retângulo.\n");
 }
 return 0;
}
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
