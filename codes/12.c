#include <stdio.h>

int fatorial(int a) {
    if (a == 0){
        return 1;
    }   
    return a * fatorial(a-1);
}


int main() {
    printf("Digite um niebefbef: ");
    int number;
    scanf("%d", &number);
    printf("O fatorial é: %d", fatorial(number));
}
