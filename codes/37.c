#include <stdio.h>
    int main() {
    int a, b, c;
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
if (a < b && b < c) {
    printf("Os números estão em ordem crescente.\n");
} else if (a > b && b > c) {
    printf("Os números estão em ordem decrescente.\n");
} else {
    printf("Os números não estão ordenados.\n");
}
return 0; }
