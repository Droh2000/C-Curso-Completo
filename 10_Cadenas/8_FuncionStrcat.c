#include<stdio.h>
#include<string.h>

int main(){
    char cad[]="Hola que tal";

    // Le agregamos mas texto a la cadena
    strcat(cad," Mi nombre es Juanga Gay");

    printf("Frase: %s",cad);

    return 0;
}