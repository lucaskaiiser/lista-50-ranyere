#include <stdio.h>
#include <stdbool.h>

bool checkPerfect(int number){
    int counter = 0;
    for (int i = number-1; i > 0; i--){
        if (number%i == 0){
            printf("%d ", i);
            counter += i;
            if (i != 1) printf("+ ");
            
        }
    }
    printf("= %d", counter);
    if (counter == number){
        return true;
    }
    return false;
}

int main() {
    printf("Digite um número: ");
    int number;
    scanf("\n\n%d", &number);
    if (checkPerfect(number)) printf("\nO número é perfeito");
    else printf("\nO número não é perfeito");
}