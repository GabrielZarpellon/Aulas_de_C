/*
Usando for, crie um programa que le um numero e faz a tabuada dele
*/

#include <stdio.h>

int main(){
    int i;
    int num,multiplicacao;

    printf("Escreva um numero: \n");
    scanf("%d",&num);

    for(i=1;i<=10;i++){
        multiplicacao=num*i;
        printf("%d x %d = %d\n",num,i,multiplicacao);
    }


    return 0;
}