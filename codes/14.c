#include <stdio.h>
#include <stdbool.h>

bool checkAbleToVote(int age){
    if (age < 18) return false;
    return true;
}

int main(){
    printf("Digite a sua idade: ");
    int age;
    scanf("%d", &age);
    if (checkAbleToVote(age)) printf("Maior de idade");
    else printf("menor de idade");
}
