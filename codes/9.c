#include <stdio.h>

void showDivisors(int number){
    printf("Divisores: ");
    for (int i = 1; i < number; i++){
        if (number % i == 0) {
            printf("%d ", i);
        }
    }
}

int main() {
    int number;
    printf("digite um numero: ");
    scanf("%d", &number);
    showDivisors(number);
    
}