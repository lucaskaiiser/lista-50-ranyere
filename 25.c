#include <stdio.h>

int isTriangle(float a, float b, float c){
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main(){

    printf("Digite os valores dos 3 lados: ");
    float a, b, c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if (isTriangle(a, b, c)) printf("formam um triângulo!\n");
    else printf("não formam um triângulo!\n");
    
}