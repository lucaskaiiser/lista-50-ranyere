#include <stdio.h>

void s_hm(int s, int *h, int *m) {
    *h = s / 3600;
    *m = (s % 3600) / 60;
}

int main() {
    int s, h, m;
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &s);
    s_hm(s, &h, &m);
    printf("Formato HH:MM -> %02d:%02d\n", h, m);
    return 0;
}
