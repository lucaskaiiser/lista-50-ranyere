#include <stdio.h>
#include <stdbool.h>

int isMultiple(int a, int b) {
    if (a % b == 0){
        return true;
    }
    return false;
}

int main(){
    printf("digite um jfbkjn: ");
    int number, divisor;
    scanf("%d", &number);
    printf("digite o divisor: ");
    scanf("%d", &divisor);
    printf("%d é divisor de %d?", divisor, number);
    if (isMultiple(number, divisor)){
        printf("\nSim");
        return 0;
    }
    printf("\nNão");    
}