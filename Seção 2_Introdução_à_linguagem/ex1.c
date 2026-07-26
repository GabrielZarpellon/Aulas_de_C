/*
Faça um programa em C que le do teclado a idade, altura e genero do usuario
*/

#include <stdio.h>
int main() {
    char sexo;
    int idade;
    float altura;

    printf("Escreva o sexo, idade e altura:\n");
    scanf(" %c %d %f", &sexo, &idade, &altura);

    printf("\n%c %d %.2f\n", sexo, idade, altura);

    return 0;
}