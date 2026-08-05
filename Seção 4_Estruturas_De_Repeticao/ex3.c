/*
Faça um programa que some os numeros impares de 1 a 1000
*/

#include <stdio.h>

int main(){
    int i;
    int somatorio=0;

    for(i=1;i<=1000;i+=2){
        somatorio+=i;
    }
    printf("%d",somatorio);

    return 0;
}