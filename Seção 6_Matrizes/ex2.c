/*
Crie um programa que faça uma matriz 4x4, some cada uma das linhas e bote num vetor, e some cada uma das colunas e bote num vetor também.
Depois imprima a matriz, imprima os dois vetores e indique qual é o vetor da soma de colunas e qual de linhas
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i,j;
    int matriz[4][4];
    int linhas[4];
    int colunas[4];
    int soma=0;

    srand(time(NULL));

    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
            matriz[i][j]=rand()%50;
    }

    printf("Matriz: \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("\t%d\t",matriz[i][j]);
            soma+=matriz[i][j];
        }
        printf("\n");
        linhas[i]=soma;
    }

    soma=0;

    for(j=0;j<4;j++){
        for(i=0;i<4;i++){
            soma+=matriz[i][j];
        }
        colunas[j]=soma;
    }
    printf("Vetor soma de linhas: \n");
    for(i=0;i<4;i++){
        printf("%d ",linhas[i]);
    }

    printf("\nVetor soma de colunas:\n");
    for(j=0;j<4;j++){
        printf("%d ",colunas[j]);
    }
    





    return 0;
}