#include <stdio.h>
#include <stdbool.h>

bool isEven(int a) {
    if (a%2 == 0) return true;    
    return false;
}

int main () {

    int number;

    printf("digite um número: ");
    scanf("%d", &number);

    if (isEven(number)){
        printf("O número é par");
        return 0;
    }

    printf("O número é ímpar");
    
}