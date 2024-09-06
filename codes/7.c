#include <stdio.h>

void showMutiplicationTable (int number) {
    for (int i = 1; i <= 10; i++){
        printf("%d X %d = %d\n", number, i, number*i);
    }
}

int main() {
    printf("Digite um número: ");
    int number;
    scanf("%d", &number);
    printf("Tabuada:\n");
    showMutiplicationTable(number);
}