#include <stdio.h>

void showNaturalsUntil(int number){
    for (int i = 0; i < number; i++){
        printf("%d ", i);
    }
}

int main() {
    printf("Digite um número: ");
    int number;
    scanf("%d", &number);
    showNaturalsUntil(number);
}