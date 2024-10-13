#include<stdio.h>
#include<string.h>

int main(){
    char palabra[30];

    printf("Ingrese una palabra: ");
    gets_s(palabra,30);

    strrev(palabra);

    printf("\nPalabra invertida: %s",palabra);
    printf("\nCantidad de caracteres: %d",strlen(palabra));

    return 0;
}