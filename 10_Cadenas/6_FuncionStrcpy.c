/*
    Copiar la cadena de caracteres "Hola mundo" de un array a otro, Luego cambiar 
    la palabra "mundo" por "y bienvenido al lenguaje C"
*/
#include<stdio.h>
#include<string.h>

int main(){
    char cad1[]="Hola Mundo";
    char cad2[30];

    // Copiamos una cadena hacia otra
    strcpy(cad2, cad1);

    // Desaparecemos la palabra "Mundo"
    // Mundo empeiza en la posicion 5 por eso se le suma 5 y ahi agregamos la frase entre comillas
    strcpy(cad2+5,"y bienvenido al lenguaje C");

    printf("Frase: %s",cad2);

    return 0;
}