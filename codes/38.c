#include <stdio.h>

int main() {
    int dias, anos, meses;
    printf("Digite a quantidade de dias: ");
    scanf("%d", &dias);
    anos = dias / 365;
    dias %= 365;
    meses = dias / 30;
    dias %= 30;
    printf("%d anos, %d meses, %d dias\n", anos, meses, dias);
    return 0;
}
