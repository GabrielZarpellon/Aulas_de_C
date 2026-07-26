/*
 Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta 
(em porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve 
pagar. Assuma que a conta será dividida igualmente.
*/

#include <stdio.h>

int main(){
    int gorjeta,n_pessoas;
    float valor;

    printf("Informe o valor da despesa, a porcentagem de gorjeta e o número de pessoas.\n");
    scanf("%f%d%d",&valor,&gorjeta,&n_pessoas);

    valor = valor + (valor*(gorjeta/100.0));

    printf("\nValor total: R$%.2f\tValor que cada pessoa deverá pagar: R$%.2f",valor,valor/n_pessoas);


    return 0;
}