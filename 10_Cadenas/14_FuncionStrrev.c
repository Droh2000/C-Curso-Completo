// Invertir una cadena de caracteres
#include<stdio.h>
#include<string.h>

int main(){
    char palabra[]="hola";

    strrev(palabra);

    printf("Palabra invertida: %s",palabra);

    return 0;
}