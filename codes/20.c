#include <stdio.h>

float convertToFahrenheit(float celsius){
    return celsius*9/5 +32;    
}

int main(){
    printf("Digite uma temperatura em celsius: ");
    float temp;
    scanf("%f", &temp);
    printf("A temperatura em Fahrenheit é: %.2f", convertToFahrenheit(temp));
}