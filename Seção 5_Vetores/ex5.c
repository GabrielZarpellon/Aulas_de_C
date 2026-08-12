/*
Faça um programa que recebe a temperatura media de cada mes do ano, e depois informa qual foi a menor e a maior e em que mes ocorreu
*/

#include <stdio.h>

int main(){
    float temp[12];
    int i;
    float maior,menor;
    int ma=0;
    int me=0;

    printf("Informe a temperatura do mês 1:\n");
    scanf("%f",&temp[0]);

    maior=temp[0];
    menor=temp[0];

    for(i=1;i<12;i++){
        printf("Informe a temperatura do mês %d: \n",i+1);
        scanf("%f",&temp[i]);

        if(temp[i]<menor){
            menor=temp[i];
            me=i;
        }
        if(temp[i]>maior){
            maior=temp[i];
            ma=i;
        }
    }

    switch(ma){
        case 0:
            printf("Maior temperatura em janeiro, %f\n",maior);
            break;
        case 1:
            printf("Maior temperatura em fevereiro, %f\n",maior);
            break;
        case 2:
            printf("Maior temperatura em março, %f\n",maior);
            break;
        case 3:
            printf("Maior temperatura em abril, %f\n",maior);
            break;
        case 4:
            printf("Maior temperatura em maio, %f\n",maior);
            break;
        case 5:
            printf("Maior temperatura em junho, %f\n",maior);
            break;
        case 6:
            printf("Maior temperatura em julho, %f\n",maior);
            break;
        case 7:
            printf("Maior temperatura em agosto, %f\n",maior);
            break;
        case 8:
            printf("Maior temperatura em setembro, %f\n",maior);
            break;
        case 9:
            printf("Maior temperatura em outubro, %f\n",maior);
            break;
        case 10:
            printf("Maior temperatura em novembro, %f\n",maior);
            break;
        case 11:
            printf("Maior temperatura em dezembro, %f\n",maior);
            break;
        default:
            break;
    }

    switch(me){
        case 0:
            printf("Menor temperatura em janeiro, %f\n",menor);
            break;
        case 1:
            printf("Menor temperatura em fevereiro, %f\n",menor);
            break;
        case 2:
            printf("Menor temperatura em março, %f\n",menor);
            break;
        case 3:
            printf("Menor temperatura em abril, %f\n",menor);
            break;
        case 4:
            printf("Menor temperatura em maio, %f\n",menor);
            break;
        case 5:
            printf("Menor temperatura em junho, %f\n",menor);
            break;
        case 6:
            printf("Menor temperatura em julho, %f\n",menor);
            break;
        case 7:
            printf("Menor temperatura em agosto, %f\n",menor);
            break;
        case 8:
            printf("Menor temperatura em setembro, %f\n",menor);
            break;
        case 9:
            printf("Menor temperatura em outubro, %f\n",menor);
            break;
        case 10:
            printf("Menor temperatura em novembro, %f\n",menor);
            break;
        case 11:
            printf("Menor temperatura em dezembro, %f\n",menor);
            break;
        default:
            break;
    }


    return 0;
}