#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char nom[20];
    char *nombre;

    printf("Ingrese su nombre: ");
    gets_s(nom, 20);

    nombre = (char *)malloc(strlen(nom)+1 * sizeof(char));

    strcpy(nombre, nom);

    printf("Nombre: %s",nombre);

    return 0;
}