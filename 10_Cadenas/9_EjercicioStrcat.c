#include<stdio.h>
#include<string.h>

int main(){
    char cad[30];

    printf("Ingrese un texto: ");
    gets_s(cad,30);

    strcat(cad,". Que tengas un buen dia!!!");

    printf("Frase: %s",cad);

    return 0;
}