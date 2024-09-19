#include <stdio.h>
#include <math.h>
int main() {
 int numero, temp, soma = 0, digitos = 0;
 printf("Digite um número inteiro: ");
 scanf("%d", &numero);
 temp = numero;
 while (temp != 0) {
 temp /= 10;
 digitos++;
 }
 temp = numero;
 while (temp != 0) {
 int digito = temp % 10;
 soma += pow(digito, digitos);
 temp /= 10;
 }
 if (soma == numero) {
 printf("O número é um número de Armstrong.\n");
 } else {
 printf("O número não é um número de Armstrong.\n");
 }
 return 0;
}
