#include <stdio.h>
int main() {
    float base, height;
    printf("Digite a base e a altura do triangulo: ");
    scanf("%f", &base);
    scanf("%f", &height);
    printf("A area do triangulo é: %.2f\n", (base * height) / 2);
    return 0;
}
