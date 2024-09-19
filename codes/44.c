#include <stdio.h>

int main() {
    int minutos;
    float valor_por_min, total;
    printf("Digite o tempo de uso em minutos: ");
    scanf("%d", &minutos);
    printf("Digite o valor por minuto: ");
    scanf("%f", &valor_por_min);
    total = minutos * valor_por_min;
    printf("Valor total da conta: %.2f\n", total);
    return 0;
}
