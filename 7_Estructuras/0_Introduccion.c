/*
    Estructura:
        Es una coleccion de uno a mas tipo de elementos denominados miembros, cada uno de los cuales
        puede ser un tipo de dato diferente.
        (Coleccion de datos de diferente tipo)
    
    Ejemplo y Declaracion:
        Coleccion de datos de discos compactos (CD):
            
            struct coleccionCD{
                char titulo[30];
                char artista[25];
                int numCanciones;
                float precio;
                char fechaCompra[20];
            }CD1, CD2, CD3; -> Asi se declaran variables de tipo Struct

        Otra forma de declarar variables de tipo Struct:
        Es dentro del main:
                struct coleccionCD CD1,CD2,CD3;

        Acceso:
            CD1.titulo;
            CD1.artista;
            CD1.numCanciones;
            ...
*/
#include<stdio.h>
#include<string.h>

// Declaracion de la Estructura
struct Persona{
    char nombre[30];
    int edad;
}
// Inicializamos de una vez la variable
persona1 = {"Juan",20},
persona2 = {"Jose",25}, persona3;

int main(){
    // Mostra los datos
    printf("Nombre: %s",persona1.nombre);
    printf("\nEdad: %i",persona1.edad);
    printf("\n\nNombre: %s",persona2.nombre);
    printf("\nEdad: %i",persona2.edad);

    // Llenar con datos del usuario
    printf("\n\nIngrese un Nombre: ");
    gets_s(persona3.nombre,30);
    printf("Ingrese la Edad: ");
    scanf("%i", &persona3.edad);
    printf("\nInformacion Registrada: ");
    printf("\nNombre: %s",persona3.nombre);
    printf("\nEdad: %i",persona3.edad);

    return 0;
}