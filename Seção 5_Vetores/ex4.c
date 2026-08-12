/*
Faça um programa que gere um menu que faz:
0:fecha o programa
1:imprime um vetor de tamanho 10
2:imprime o vetor ao contrario
O programa deve funcionar até apertar 0
*/

#include <stdio.h>

int main(){
    int vet[10];
    int i;
    int resposta=1;

    for(i=0;i<10;i++){
        printf("Informe o valor %d: \n",i);
        scanf("%d",&vet[i]);
    }

    do{
        printf("\nMenu\n0. Sair\n1. Mostrar vetor\n2. Vetor inverso\n");
        scanf("%d",&resposta);

        switch(resposta){
            case 0:
                break;
            case 1:
                for(i=0;i<10;i++){
                    printf("\t%d\n",vet[i]);
                }
                break;
            case 2:
                for(i=9;i>=0;i--){
                    printf("\t%d\n",vet[i]);
                }
                break;
            default:
                break;
        }
    }while(resposta!=0);

}