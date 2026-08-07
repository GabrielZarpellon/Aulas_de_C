/*
Um programa que recebe a quantidade de funcionários de uma empresa, o salário deles. Calcula a média salarial da empresa, 
mostra o menor salario e o maior
*/

#include <stdio.h>

int main(){
    int num,i;
    float salario, maior,menor;
    float media=0.0;

    printf("Informe quantos funcionários tem na empresa: \n");
    scanf("%d",&num);

    printf("Informe o salário do funcionário: \n");
    scanf("%f",&salario);

    maior=salario;
    media=salario;

    for(i=1;i<num;i++){
        printf("Informe o salário do funcionário: \n");
        scanf("%f",&salario);

        media+=salario;
        
        if(salario>=maior){
            maior=salario;
        }
        else{
            menor=salario;
        }
    }

    media=media/num;

    printf("Media salarial da empresa:\t%.2f\n",media);
    printf("Maior salario:\t%.2f\n",maior);
    printf("Menor salario:\t%.2f\n",menor);

    return 0;
}