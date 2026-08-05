/*
Faça uma calculadora com as quatro operações basicas usando switch case
*/

#include <stdio.h>

int main(){

    char operacao;
    int num1,num2;

    printf("Informe qual operação deseja fazer (+,-,*,/)\n");
    scanf("%c",&operacao);

    printf("Informe o primeiro numero: \n");
    scanf("%d",&num1);
    printf("Informe o segundo numero: \n");
    scanf("%d",&num2);

    switch(operacao){
        case '+':
            printf("%d + %d = %d",num1,num2,num1+num2);
            break;
        
        case '-':
            printf("%d - %d = %d",num1,num2,num1-num2);
            break;    
        case '*':
            printf("%d * %d = %d",num1,num2,num1 * num2);
            break;   
        case '/':
            if(num2==0){
                printf("Indeterminado\n");
                break;
            }
            else{
                double resultado = (double) num1 / (double) num2;
                printf("%d / %d = %.2f\n", num1, num2, resultado);
                break; 
            }
        default:
            printf("Operação invalida\n");
            break;
    }

    return 0;
}