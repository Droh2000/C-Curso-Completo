#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 20

int main(){
    char cad1[TAM], cad2[TAM], aux[TAM];

    printf("Ingrese un texto: ");
    gets_s(cad1, TAM);

    printf("Ingrese otro texto: ");
    gets_s(cad2, TAM);

    for (int i = 0; i < TAM; i++){
        aux[i] = cad1[i];
    }

    strcpy(cad1, cad2);
    strcpy(cad2, aux);

    printf("Nombres Intercambiados:\n%s\n%s",cad1,cad2);

    return 0;
}