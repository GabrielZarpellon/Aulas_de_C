/*
Faça um programa que le um valor inteiro N e apresenta o quadrado de cada valor par de 1 até N
*/

#include <stdio.h>

int main(){
    int n;
    int i;

    printf("Informe o valor de n: \n");
    scanf("%d",&n);

    for(i=2;i<=n;i+=2){
        printf("Quadrado de %d = %d\n",i,i*i);
    }


    return 0;
}