#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    // Primero creamos una cadena de caracteres de 10 elementos
    char* nom;

    nom = malloc(10 * sizeof(char));

    strcpy(nom, "Diego");

    printf("Nombre: %s",nom);

    // Ampliando la cadena de carcteres a 30 espacios
    char* nomCompleto;
    // Ahora queremos 30 espacios
    nomCompleto = realloc(nom,30*sizeof(char));
    // Le agregamos texto (Concatenando despues del texto que ya tiene asignado)
    strcat(nomCompleto," Jose Martinez");

    printf("\nNombre Completo: %s",nomCompleto);

    free(nom);
    free(nomCompleto);
    return 0;
}