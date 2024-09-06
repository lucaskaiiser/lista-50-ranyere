#include <stdio.h>

float applyPercentage(float value, float percent) {
    return value + value*percent/100;
}

int main() {
    printf("Digite o valor do produto:");
    float productValue;
    scanf("%f", &productValue);
    productValue = applyPercentage(productValue, -10);
    printf("O produto com desconte é: %.2f", productValue);
}
