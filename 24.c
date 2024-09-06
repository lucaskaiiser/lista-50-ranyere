// IMC = PESO/(ALTURA)²

#include <stdio.h>

float IMC(float peso, float altura){
    return peso/(altura*altura);
}

int main(){
    printf("Digite seu peso: ");
    float peso, altura, imc;
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    imc = IMC(peso, altura);
    printf("Seu IMC é %.2f\n", imc);

    if (imc < 18.5) {
        printf("Baixo peso\n");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Peso normal\n");
    } else if (imc >= 25 && imc < 29.9) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidade\n");
    }
}