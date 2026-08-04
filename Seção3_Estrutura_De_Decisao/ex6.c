/*
Faça um programa que identifique se o triangulo é equilátero, isósceles ou escaleno
*/

#include <stdio.h>

int main(){
    int a,b,c;

    printf("Informe os tamanhos de cada lado do triangulo: \n");
    scanf("%d%d%d",&a,&b,&c);

    //condição pra que seja um triangulo
    if(a+b>c && a+c>b && b+c>a){
        if(a==b && a==c){
            printf("Equilátero");
        }
        else if(a==b || a==c || b==c){
            printf("Isósceles");
        }
        else{
            printf("Escaleno");
        }
    }
    else{
        printf("Não é um triangulo");
    }

    return 0;
}