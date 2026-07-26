/*
Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que 
solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser 
paga, sabendo que são descontados 8% para imposto de renda.
*/

#include <stdio.h>

int main(){

    int dias;
    float valor;

    printf("Informe o numero de dias de trabalho: \n");
    scanf("%d",&dias);

    valor = dias*45;
    valor = valor-(valor*(8/100.0));

    printf("Quantia liquida: R$%.2f",valor);

    return 0;
}