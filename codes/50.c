#include <stdio.h>

int d_vida(int a) {
    return a * 365; // Aproximação sem contar anos bissextos
}

int main() {
    int a, d;
    printf("Digite sua idade em anos: ");
    scanf("%d", &a);
    d = d_vida(a);
    printf("Você já viveu aproximadamente %d dias.\n", d);
    return 0;
}
