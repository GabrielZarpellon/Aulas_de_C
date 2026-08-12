/*
Troque o primeiro valor do vetor com o ultimo e assim por diante
*/

#include <stdio.h>

int main(){
    int vet[10];
    int i;

    int a=0;
    int f=9;
    int copia;

    //coloca os valores dentro do vetor
    for(i=0;i<10;i++){
        printf("Informe um valor: \n");
        scanf("%d",&vet[i]);
    }

    //imprime o vetor
    printf("Vetor original: \n");
    for(i=0;i<10;i++){
        printf("\t%d\n",vet[i]);
    }

    do{
        copia=vet[f];
        vet[f]=vet[a];
        vet[a]=copia;
        f--;
        a++;
    }while(a<f);

    //imprime o vetor
    printf("Vetor invertido: \n");
    for(i=0;i<10;i++){
        printf("\t%d\n",vet[i]);
    }



    return 0;
}