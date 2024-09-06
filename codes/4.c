#include <stdio.h>

int doubler(int a) {
    return a*2;
}

int main() {
    int number;

    printf("digite um número: ");
    scanf("%d", &number);
    printf("O dobro é: %d\n", doubler(number));

}