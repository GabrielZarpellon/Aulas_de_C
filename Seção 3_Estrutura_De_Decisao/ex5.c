/*
Leia um caractere e diga se é vogal ou não
*/

#include <stdio.h>

int main(){
    char letra;

    printf("Digite uma letra \n");
    scanf("%c",&letra);

    if(letra=='a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra=='A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
        printf("É vogal");
    }
    else{
        printf("É consoante");
    }
        
    return 0;
}