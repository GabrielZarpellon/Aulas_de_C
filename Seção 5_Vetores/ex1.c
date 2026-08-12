/*
Preencha um vetor de tamanho 10 com inteiros, pedindo os valores ao usuario.
Em seguida salve num segundo vetor os quadrados dos valores do primeiro. Imprima depois os dois vetores
*/

#include <stdio.h>

int main(){
    int vet[10];
    int quadrado[10];

    int i;

    for(i=0;i<10;i++){
        printf("Informe um valor: \n");
        scanf("%d",&vet[i]);
    }

    for(i=0;i<10;i++){
        quadrado[i]=vet[i]*vet[i];
    }

    for(i=0;i<10;i++){
        printf("Vetor 1: %d\tVetor 2: %d\n",vet[i],quadrado[i]);
    }


    return 0;
}