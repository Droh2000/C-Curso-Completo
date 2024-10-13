// Convertir una cadena a un numero ("1234" -> 1234)
#include<stdio.h>
#include<string.h>

int main(){
    char cad[]="1234";
    int valor;

    valor = atoi(cad);//Convertir la cadena a numero entero

    printf("Numero Entero: %i",valor);

    return 0;
}