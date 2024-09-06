#include <stdio.h>

float applyPercentage(float value, float percent) {
    return value + value*percent/100;
}

int main() {
    printf("Digite o valor atual do salário:");
    float salary;
    scanf("%f", &salary);
    salary = applyPercentage(salary, 15);
    printf("O salario atualizado é %.2f", salary);
}