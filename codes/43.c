#include <stdio.h>

int main() {
    float reais, dolar, taxa;
    printf("Digite o valor em reais: ");
    scanf("%f", &reais);
    printf("Digite a taxa de câmbio: ");
    scanf("%f", &taxa);
    dolar = reais / taxa;
    printf("Valor em dólares: %.2f\n", dolar);
    return 0;
}
