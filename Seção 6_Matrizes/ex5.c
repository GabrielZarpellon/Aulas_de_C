/*
imprima a diagonal secundária de uma matriz
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int matriz[5][5];
    int i,j;

    srand(time(NULL));

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            matriz[i][j]=rand()%10;
        }
    }

    printf("Matriz:\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d | ",matriz[i][j]);
        }
        printf("\n");
    }


    printf("\nDiagonal secundária: ");
    for(i=0;i<5;i++){
        printf("%d | ",matriz[i][5-i-1]);
    }


    return 0;
}