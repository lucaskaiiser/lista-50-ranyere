#include <stdio.h>

float m_cm(float m) {
    return m * 100;
}

float m_mm(float m) {
    return m * 1000;
}

int main() {
    float m;
    printf("Digite o valor em metros: ");
    scanf("%f", &m);
    printf("Centímetros: %.2f\n", m_cm(m));
    printf("Milímetros: %.2f\n", m_mm(m));
    return 0;
}
