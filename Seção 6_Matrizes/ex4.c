/*
imprima a diagonal principal de uma matriz 5x5
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int matriz[5][5];
    int i,j;

    //gera a seed pra aleatorizar os numeros
    srand(time(NULL)); 

    //preenche a matriz com numeros aleatorios
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            matriz[i][j]=rand()%10;
        }
    }

    //imprime a matriz
    printf("Matriz:\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d | ",matriz[i][j]);
        }
        printf("\n");
    }

    //só vai contabilizar como diagonal posições onde a linha e a coluna são iguais, exemplo 1,1  2,2  3,3 ...
    printf("\nDiagonal: \n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==j){
                printf("%d ",matriz[i][j]);
            }
            else{
                printf("_ ");
            }
        }
        printf("\n");
    }



    

    return 0;
}