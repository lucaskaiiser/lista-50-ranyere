#include <stdio.h>
#include <stdbool.h>

bool checkDivisor(int number, int divisor) {
    if (number % divisor == 0) return true;
    return false;
}

int main(){
    printf("digite um número:");
    int number;
    scanf("%d", &number);

    if (checkDivisor(number, 3)) {
        if(checkDivisor(number, 5)){
            printf("é divisível por 3 e por 5");
            return 0;
        }
    }
    printf("Não é divisível por 3 e 5");

}