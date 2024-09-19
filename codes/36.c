
#include <stdio.h>
int main() {
    float litros, price;
    printf("Digite a quantidade de litros: ");
    scanf("%f", &litros);
    printf("Digite o preco por litro: ");
    scanf("%f", &price);
    printf("O valor total a ser pago vai ser de: %.2f\n", litros * price);
    return 0;
}
