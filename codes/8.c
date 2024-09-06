#include <stdio.h>

void showAntecesors(int number) {
    for (int i = 1; i < number; i++) printf("%d ",i);

}

int main(){
    printf("Digite um número: ");
    int number;
    scanf("%d", &number);
    printf("Os antecessores são: ");
    showAntecesors(number);
}