// Convertir una cadena a un numero float
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char *cad = "123.45";
    float valor;

    valor = atof(cad);// Convirtiendo la cadena a un Float
    
    printf("Numero Flotante: %.2f",valor);

    return 0;
}