/*
Um determinado material radioativo perde metade da sua massa a cada 50 segundos. Dada a massa inicial em gramas,
faça um programa que retorne o tempo necessário para que a massa se torne menor que 0,05g
*/

#include <stdio.h>

int main(){
    float massa_rad;
    int seg=0;

    printf("Informe a massa do material radioativo: \n");
    scanf("%f",&massa_rad);

    while(massa_rad>=0.05){
        massa_rad=massa_rad/2;
        seg+=50;
        printf("Massa: %f \tSegundos: %d\n",massa_rad,seg);
    }


    printf("Quantidade de total segundos: %d\n",seg);

    return 0;
}

 