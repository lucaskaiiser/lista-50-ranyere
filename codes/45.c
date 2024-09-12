#include <stdio.h>

float p_calc(float d, int m) {
    return d / m;
}

int main() {
    float d, p;
    int m;
    printf("Digite o valor da dívida: ");
    scanf("%f", &d);
    printf("Digite o número de meses: ");
    scanf("%d", &m);
    p = p_calc(d, m);
    printf("Valor de cada parcela: %.2f\n", p);
    return 0;
}
