#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char nom[20], *pNom;
    int longitud;

    strcpy(nom,"Diego");

    longitud = strlen(nom);
    
    pNom = malloc(longitud+1 * sizeof(char));

    strcpy(pNom, nom);

    printf("\nNombre: %s",pNom);

    free(pNom);

    printf("\nNombre: %s",pNom);
    return 0;
}