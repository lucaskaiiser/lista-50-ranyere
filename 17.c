#include <stdio.h>
#include <stdbool.h>

bool checkPositive(int number){
    if (number > 0) return true;
    return false;
}

bool checkSameSignal(int number1, int number2){
    if (checkPositive(number1) && checkPositive(number2)) return true;
    if (!checkPositive(number1) && !checkPositive(number2)) return true;
    return false;   
}

int main() {
    printf("digite dois números:\n");
    int number1, number2;
    scanf("%d", &number1);
    scanf("%d", &number2);

    printf("Ambos são ");
    if (checkSameSignal(number1, number2)){
        if (number1 == 0){
            printf("neutros");
            return 0;
        }

        if(checkPositive(number1)) printf("positivos");
        else printf("negativos");
        
        return 0;
    }
    printf("de sinais opostos");
}