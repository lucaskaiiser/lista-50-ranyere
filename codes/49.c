#include <stdio.h>

float km_mi(float km) {
    return km * 0.621371;
}

int main() {
    float km;
    printf("Digite a distância em quilômetros: ");
    scanf("%f", &km);
    printf("Distância em milhas: %.2f\n", km_mi(km));
    return 0;
}
