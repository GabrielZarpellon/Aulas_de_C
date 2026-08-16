/*
Faça a transposta de uma matriz
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i,j;
    int matriz[2][3];
    int transposta[3][2];

    srand(time(NULL));

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            matriz[i][j]=rand()%10;
        }
    }

    printf("Matriz: \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d |",matriz[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            transposta[j][i]=matriz[i][j];
        }
    }

    printf("Transposta: \n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d |",transposta[i][j]);
        }
        printf("\n");
    }


    return 0;
}