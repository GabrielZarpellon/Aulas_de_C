/*trocar o valor de duas variaveis*/

#include <stdio.h>

int main(){
    int a=5;
    int b=10;
    int c;

    printf("a = %d, b = %d", a,b);
    c=a;
    a=b;
    b=c;

    printf("\na = %d, b = %d", a,b);



    return 0;
}