#include <stdio.h>
int main() {
 int numero, soma = 0;
 printf("Digite um número: ");
 scanf("%d", &numero);
 for (int i = 1; i <= numero; i++) {
 soma += i;
 }
 printf("A soma de todos os números naturais até %d é: %d\n", numero, soma);
 return 0;
}