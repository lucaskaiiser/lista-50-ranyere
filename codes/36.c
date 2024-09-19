#include <stdio.h>
int main() {
    float litros, precoPorLitro, valorTotal;
    printf("Digite a quantidade de litros: ");
    scanf("%f", &litros);
    printf("Digite o preço por litro: ");
    scanf("%f", &precoPorLitro);
    valorTotal = litros * precoPorLitro;
    printf("O valor total a ser pago é: R$ %.2f\n",
    valorTotal);
    return 0;
}