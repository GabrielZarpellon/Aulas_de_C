/*
trocar o valor de duas variaveis sem usar uma auxiliar
*/

#include <stdio.h>

int main(){

    int a=17;
    int b=3;

    printf("a = %d, b = %d", a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\na = %d, b = %d", a,b);

    return 0;
}