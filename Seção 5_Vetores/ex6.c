/*
Ordenar um vetor por ordem crescente que foi gerado numeros aleatorios
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int i,copia,vet[100];
    int trocou;

    srand(time(NULL));

    //preenche vetor com numeros aleatorios
    for(i=0;i<100;i++){
        vet[i]=rand() % 1000;
    }

    //imprime vetor original
    printf("Vetor original: \n");

    for(i=0;i<100;i++){
        printf("\t%d\n",vet[i]);
    }


    do
    {
        trocou=0;
        //reorganiza o vetor via bubble-sort. Precisa ir até 99 apenas para que o ultimo esteja livre pra comparação
        for(i=0;i<99;i++){
            if(vet[i]>vet[i+1]){
                copia = vet[i+1];
                vet[i+1]=vet[i];
                vet[i]=copia;
                trocou=1;
            }
        }
    } while (trocou!=0); //trocou só vai ser 0 quando o if não for feito, o que significa que já ordenou tudo
    

    printf("Vetor ordenado: \n\n-------------------------------\n");
    //reimprime o vetor reeorganizado
    for(i=0;i<100;i++){
        printf("\t%d\n",vet[i]);
    }

    return 0;
}