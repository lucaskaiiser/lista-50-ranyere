// Crie um programa que leia um valor de tempo em minutos e o 
// converta para horas e minutos

#include <stdio.h>
 
void showTimeStamp(int minutes){
    int hours, minutes_;
    
    hours = minutes/60;
    minutes_ = minutes % 60;
    printf("%dH %dmin",  hours, minutes_);
}

int main(){
    printf("Digite uma quantidade de minutos:");
    int minutes;
    scanf("%d", &minutes);
    showTimeStamp(minutes);
}