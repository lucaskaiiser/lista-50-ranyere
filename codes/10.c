#include <stdio.h>
#include <stdbool.h>

bool isPrimeNumber(int number) {
    for (int i = 2; i < number; i++){
        if (number % i == 0 ) return false;
    }
    return true;

}

int main() {
    printf("Digite um número: ");
    int number;
    scanf("%d", &number);
    if (isPrimeNumber(number)) printf("é primo");
    else printf("não é primo");
    
}
