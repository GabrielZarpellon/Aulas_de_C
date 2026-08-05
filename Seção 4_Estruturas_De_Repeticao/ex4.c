/*
Faça um programa que verifique os numeros multiplos de 7 de 1 a 1000
*/

#include <stdio.h>

int main(){
    int i;

    for(i=1;i<=1000;i++){
        if(i%7==0){
            printf("%d é multiplo de 7\n",i);
        }
        
    }

    return 0;
}