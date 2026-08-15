/*
Faça um programa que faça a soma de todos os elementos de uma matriz
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int soma=0;
    int matriz[3][3];
    int i,j;

    srand(time(NULL));

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matriz[i][j]=rand()%10;
        }
    }

    printf("Matriz:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",matriz[i][j]);
            soma+=matriz[i][j];
        }
        printf("\n");
    }

    printf("\nSoma dos numeros da matriz: %d",soma);



    return 0;
}