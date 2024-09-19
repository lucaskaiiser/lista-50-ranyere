#include <stdio.h>
// Função para calcular o MDC usando o algoritmo

int calcular_mdc(int a, int b) {
 while (b != 0) {
 int temp = b;
 b = a % b;
 a = temp;
 }
 return a; }
int main() {
 int num1, num2;
 printf("Digite o primeiro número: ");
 scanf("%d", &num1);
 printf("Digite o segundo número: ");
 scanf("%d", &num2);
 int mdc = calcular_mdc(num1, num2);
 printf("O maior divisor comum entre %d e %d é: %d\n", num1, num2, mdc);
 return 0; }