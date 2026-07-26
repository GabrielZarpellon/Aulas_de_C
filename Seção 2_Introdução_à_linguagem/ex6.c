/*
Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. 
Considere como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o 
correspondente em Dólares
*/

#include <stdio.h>

int main(){

    float valor,valor_dolar;

    printf("Informe o valor em reais: \n");
    scanf("%f",&valor);

    valor_dolar=valor/5.30;

    printf("Valor em dólar: $%.2f",valor_dolar);

    return 0;
}