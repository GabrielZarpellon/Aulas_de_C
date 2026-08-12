/*
soma de dois vetores em um terceiro, e imprimir os 3 vetores
*/

#include <stdio.h>

int main(){
    int vet1[5];
    int vet2[5];
    int vet3[5];
    int i;

    for(i=0;i<5;i++){
        printf("Informe um valor pro primeiro vetor: \n");
        scanf("%d",&vet1[i]);
        printf("Informe um valor pro segundo vetor: \n");
        scanf("%d",&vet2[i]);
    }

    for(i=0;i<5;i++){
        vet3[i]=vet1[i]+vet2[i];
    }

    for(i=0;i<5;i++){
        printf("%d + %d = %d\n",vet1[i],vet2[i],vet3[i]);
    }


    return 0;
}