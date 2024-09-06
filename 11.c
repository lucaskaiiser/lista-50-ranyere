#include <stdio.h>

int multiplier(int a, int b) {
    int total = 0;
    for (int i=1; i <= b; i++) {
        total += a;    
    }

    return total;
}

int main () {
    printf("Digite um número: ");
    int number, multip;
    scanf("%d", &number);
    printf("mutiplicar por quanto? ");
    scanf("%d", &multip);

    printf("O resultado é: %d", multiplier(number, multip));

}