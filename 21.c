#include <stdio.h>
 
void showTimeStamp(int seconds){
    int hours, minutes, seconds_;
    hours = seconds/3600;
    minutes = (seconds%3600)/60;
    seconds_ = seconds %60;
    printf("%dH %dmin %ds",  hours, minutes, seconds_);
}

int main(){
    printf("Digite uma quantidade de segundos:");
    int seconds;
    scanf("%d", &seconds);
    showTimeStamp(seconds);
}