#include<stdio.h>
#include<string.h>
#define TAM 30

int main(){
    char cadena[TAM];
    int cant=0;

    printf("Ingrese una cadena de Texto: ");
    gets_s(cadena, TAM);

    for (int i = 0; i < strlen(cadena); i++){
        cant++;
    }

    printf("Cadena invertida:\n");
    for (int i = strlen(cadena)-1; i >= 0; i--){
        printf("%c",cadena[i]);
    }

    printf("\nCantidad de Caracteres: %i",cant);
    
    return 0;
}