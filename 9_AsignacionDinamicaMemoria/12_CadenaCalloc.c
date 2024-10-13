#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char nom[50];

    printf("Digite una palabra (String): ");
    gets_s(nom, 50);

    // Sacamos el tamano exacto que requerimos de la palabra
    char* pNom = calloc(strlen(nom)+1, sizeof(int));// +1 por el simbolo de la final de cadena: \0

    strcpy(pNom, nom);// Le mandamos todo el contenido

    printf("Palabra: %s", pNom);

    free(pNom);
    return 0;
}