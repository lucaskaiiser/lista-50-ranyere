#include <stdio.h>
int main() {
    int v1, v2, v3;
    printf("Digite primeiro numeros: ");
    scanf("%d", &v1);
    printf("Digite segundo numeros: ");
    scanf("%d", &v2);
    printf("Digite terceiro numeros: ");
    scanf("%d", &v3);
    if (v1 < v2 && v2 < v3) {
        printf("Ordem crescente.\n");
    } else if (v1 > v2&& v2 > v3) {
        printf("Ordem decrescente.\n");
    } else {
        printf("Nao ordenados.\n");
    }
    return 0;
}
