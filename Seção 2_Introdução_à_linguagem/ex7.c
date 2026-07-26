/*
Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela 
a conversão para horas, minutos e segundos.
*/

#include <stdio.h>

int main(){
    int sec,min,h;

    printf("Informe os segundos: \n");
    scanf("%d",&sec);

    h=sec/3600;
    min=(sec%3600)/60;
    sec=(sec%3600)%60;

    printf("%d:%d:%d",h,min,sec);

    return 0;
}