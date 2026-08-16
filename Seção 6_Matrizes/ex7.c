/*
imprima os valores abaixo da diagonal principal de uma matriz NxN
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int tam=7;
    int matriz[tam][tam];
    int i,j;

    srand(time(NULL));

    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            matriz[i][j]=rand()%10;
        }
    }
    
    printf("Matriz: \n");
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            printf("%d |",matriz[i][j]);
        }
        printf("\n");
    }


    printf("\nElementos abaixo da diagonal: \n");
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(i>j){
                printf(" %d ",matriz[i][j]);
            }
            else{
                printf(" _ ");
            }
        }
        printf("\n");
    }


    return 0;
}