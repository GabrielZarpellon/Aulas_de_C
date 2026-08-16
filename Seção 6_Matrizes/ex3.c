/*
Some os elementos de mesma posição de duas matrizes e bote numa terceira matriz
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int A[3][3],B[3][3],C[3][3];
    int i,j;

    srand(time(NULL));

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            A[i][j]=rand()%10;
            B[i][j]=rand()%10;
        }
    }

    printf("Matriz A:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\t%d\t",A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\t%d\t",B[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }

    printf("\nMatriz C:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\t%d\t",C[i][j]);
        }
        printf("\n");
    }



    return 0;
}