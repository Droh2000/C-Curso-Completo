#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    // Anteriormente definiamos con un limite los String y si un usabamos todo
    // el espacio, igualmente se reserva esa memoira en la maquina y ocupamos espacio sin uso
    char nom[20];
    char* pNom;
    int longitud;

    strcpy(nom,"Diego");// Metemos la cadena dentro de la varibale

    // Queremos saber cuanta longitud exactamente estamos utilizando para la variable char normal
    longitud = strlen(nom);
    printf("Longitud de la cadena: %i",longitud);
    // Ademas de la cantidad de letras; Aqui todas las cadenas tienen su final de cadena "\0" y esto quivale a una posicion mas de memoria
    
    // Mencionamos lo de arriba porque cuando usemos malloc tenemos que sumarle uno a la longitud porque 
    // strlen no nos contabiliza ese final de cadena
    // Aqui multiplicamos el tamano que tiene un char por la longitud que solo vamos a ocupar
    pNom = malloc(longitud+1 * sizeof(char));

    // Copiamos el nombre a nuestra variable dinamica
    strcpy(pNom, nom);

    // Aqui solo usamos los espacios necesarios para almacenar el nombre
    printf("\nNombre: %s",pNom);

    return 0;
}