/*
imprima os valores abaixo da diagonal principal de uma matriz NxN
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int matriz[4][4];
    int i,j;

    srand(time(NULL));

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            matriz[i][j]=rand()%10;
        }
    }
    
    printf("Matriz: \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d |",matriz[i][j]);
        }
        printf("\n");
    }


    printf("\nElementos abaixo da diagonal: \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(i>j){
                printf("%d ",matriz[i][j]);
            }
        }
    }


    /*
    11 12 13 14
    21 22 23 24
    31 32 33 34
    41 42 43 44
    */



    return 0;
}