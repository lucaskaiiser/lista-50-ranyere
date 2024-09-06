#include <stdio.h>

float mean(float a,int c) {
    return a/c;
}

int main(){
    int number, i;
    float total = 0 ;

    for (i = 0; i < 3; i++) {
        printf("digite um numero: ");
        scanf("%d", &number);
        total += number;
    }

    printf("A média é: %.2f", mean(total, i));

    
}