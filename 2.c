#include <stdio.h>

float bigger(float a, float b, float c ){
    if (a>b && a>c){
        return a;
    }
    if (b> a && b > c) {
        return b;
    }
    return c;
}

int main() {
    float A,B,C;

    printf("informe a seguir três números: ");
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    printf("O maior deles é: %.2f", bigger(A,B,C));

}