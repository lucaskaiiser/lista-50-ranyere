#include <stdio.h>

int bigger(int a, int b){
    if (a>b) return a;
    return b;
}

int main(){
    int numberA, numberB;

    printf("digite um numero: ");
    scanf("%d", &numberA);
    printf("digite um numero: ");
    scanf("%d", &numberB);

    printf("O maior deles é: %d", bigger(numberA, numberB));
}