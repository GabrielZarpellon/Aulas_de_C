/*
Um programa que faz a multiplicação de dois numeros inteiros sem utilizar o operador da multiplicação
*/

#include <stdio.h>

int main(){
    int num1,num2;
    int multiplicacao=0;
    int i;

    printf("Infome o primeiro numero:\t");
    scanf("%d",&num1);
    printf("\nInforme o segundo numero:\t");
    scanf("%d",&num2);

    for(i=1;i<=num2;i++){
        multiplicacao+=num1;
    }

    printf("\n%d x %d = %d",num1,num2,multiplicacao);

    return 0;
}