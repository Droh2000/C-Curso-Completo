#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 20

int main(){
    char nombre[TAM], copia[TAM];

    printf("Ingrese su nombre: ");
    gets_s(nombre, TAM);

    /*for (int i = 0; i < TAM; i++){
        copia[i] = nombre[i];
    }*/

    //Funcion para copiar cadenas
    strcpy(copia,nombre);
    
    printf("Su nombre en la copia es:\n");
    /*for (int i = 0; i < TAM; i++){
        printf("%c",copia[i]);
    }*/
    printf("%s",copia);

    return 0;
}