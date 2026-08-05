/*
Digite uma senha até que esteja correta
*/

#include <stdio.h>

int main(){
    int senha = 1234;
    int input;

    do{
        printf("\nDigite a senha: \n");
        scanf("%d",&input); 
        if(input!=senha){
            printf("Senha inválida\n");
        }
    }while(input!=senha);

    if(input==senha){
        printf("Senha correta!");
    }
    

    return 0;
}