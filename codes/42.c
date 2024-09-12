#include <stdio.h>

int data_valida(int d, int m, int a) {
    if (m < 1 || m > 12 || d < 1 || d > 31) return 0;
    if (m == 2 && d > 29) return 0;
    if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) return 0;
    return 1;
}

int main() {
    int dia, mes, ano;
    printf("Digite uma data (DD/MM/AAAA): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    if (data_valida(dia, mes, ano)) {
        printf("Data valida.\n");
    } else {
        printf("Data invalida.\n");
    }
    return 0;
}