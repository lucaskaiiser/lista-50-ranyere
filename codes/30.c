// Escreva um programa que leia um número
// inteiro e exiba seu antecessor e seu sucessor.
#include <stdio.h>
int main() {
 int numero;
 printf("Digite um número inteiro: ");
 scanf("%d", &numero);
 printf("O antecessor de %d é %d e o sucessor é %d.\n", numero, numero - 1, numero + 1);
 return 0;
}