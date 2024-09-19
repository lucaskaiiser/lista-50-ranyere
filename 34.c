#include <stdio.h>
int main() {
    int numero, soma = 0;
    printf("Digite um número: ");
    scanf("%d", &numero);
    while (numero != 0) {
    soma += numero % 10; //pega o ultimo nmr
    numero /= 10; // retira o ultimo nmr
 }
    printf("A soma dos dígitos é: %d\n", soma);
    return 0;
}
