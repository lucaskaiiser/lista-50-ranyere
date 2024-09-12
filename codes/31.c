#include <stdio.h>
int mdc(int v1, int v2){
    int storage;
    while (v2!=0){
          storage = v2;
          v2 = v1%v2;
          v1 = storage;
          }
          return v1;
}
int main(){
    int n1, n2;
    printf("Me informe o primeiro numero: ");
    scanf("%d",&n1);
    printf("Me informe o segundo numero: ");
    scanf("%d",&n2);
    printf("O MDC é: %d\n", mdc(n1, n2));
    return 0;    
    }
