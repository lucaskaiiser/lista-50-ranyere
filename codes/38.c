#include <stdio.h>
int main() {
    int dias, dias2 , anos, meses;
    printf("Digite a quantidade de dias: ");
    scanf("%d", &dias);
    dias2=dias;
    anos = dias / 365;
    dias %= 365;
    meses = dias / 30;
    dias %= 30;
    printf("%d dias é igual a %d anos, %d meses e %d dias.\n", dias2, anos, meses, dias);
    return 0; 
}