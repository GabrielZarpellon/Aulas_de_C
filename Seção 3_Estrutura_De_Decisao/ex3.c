/*
Leia um valor e diga se ele é divisivel por 2,3 ou 5
*/

#include <stdio.h>

int main(){
    int num;

    printf("Informe um valor: \n");
    scanf("%d",&num);

    if(num%2==0){
        printf("É divisível por 2\n");
    }
    else{
        printf("Não é divisivel por 2\n");
    }

    if(num%3==0){
        printf("É divisível por 3\n");
    }
    else{
        printf("Não é divisivel por 3\n");
    }

    if(num%5==0){
        printf("É divisível por 5\n");
    }
    else{
        printf("Não é divisivel por 5\n");
    }

    return 0;
}