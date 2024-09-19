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