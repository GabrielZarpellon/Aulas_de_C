/*
Encontre o maior e o menor entre 3 numeros
*/

#include <stdio.h>

int main(){
    int a,b,c;
    int maior,menor;

    printf("Informe 3 valores: \n");
    scanf("%d%d%d",&a,&b,&c);

    //metodo 1
    if(a>b && a>c){
        maior = a;
        printf("Maior numero: %d\n",maior);
    }
    if(b>a && b>c){
        maior = b;
        printf("Maior numero: %d\n",maior);
    } 
    if(c>a && c>b){
        maior = c;
        printf("Maior numero: %d\n",maior);
    }
    
    //metodo 2
    if(a<b){
        if(a<c){
            menor = a;
            printf("Menor numero: %d",menor);
        }
        else{
            menor = c;
            printf("Menor numero: %d",menor);
        }
    }
    else{
        if(b<c){
            menor=b;
            printf("Menor numero: %d",menor);
        }
        else{
            menor=c;
            printf("Menor numero: %d",menor);
        }
    }

    return 0;
}