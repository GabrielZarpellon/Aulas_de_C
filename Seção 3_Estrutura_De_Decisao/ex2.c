/*
Leia 5 valores e conta quantos são zeros, positivos e negativos, sem usar while ou if (apenas usando else e if)
*/

#include <stdio.h>

int main(){

    int num;
    int negativos=0;
    int positivos=0;
    int zeros=0;

    printf("Escreva um valor: \n");
    scanf("%d",&num);
    if(num>0){
        positivos++;
    }
    else if(num<0){
        negativos++;
    }
    else{
        zeros++;
    }

    printf("Escreva um valor: \n");
    scanf("%d",&num);
    if(num>0){
        positivos++;
    }
    else if(num<0){
        negativos++;
    }
    else{
        zeros++;
    }

    printf("Escreva um valor: \n");
    scanf("%d",&num);
    if(num>0){
        positivos++;
    }
    else if(num<0){
        negativos++;
    }
    else{
        zeros++;
    }

    printf("Escreva um valor: \n");
    scanf("%d",&num);
    if(num>0){
        positivos++;
    }
    else if(num<0){
        negativos++;
    }
    else{
        zeros++;
    }

    printf("Escreva um valor: \n");
    scanf("%d",&num);
    if(num>0){
        positivos++;
    }
    else if(num<0){
        negativos++;
    }
    else{
        zeros++;
    }

    printf("Quantidade de positivos:%d\nQuantidade de negativos:%d\nQuantidade de zeros:%d",positivos,negativos,zeros);

    return 0;
}