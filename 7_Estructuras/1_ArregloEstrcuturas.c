#include<stdio.h>
#include<string.h>

struct Persona{
    char nombre[20];
    int edad;
}personas[5];// Queremos 5 registros

void limpiarBuffer();// Funcion para poder ingresar los datos


int main(){
    printf("Ingrese los datos de las personas: \n");
    for (int i = 0; i < 5; i++){
        printf("%i. Nombre: ",i+1);
        gets_s(personas[i].nombre, 30);
        printf("%i. Edad: ",i+1);
        scanf("%i",&personas[i].edad);
        limpiarBuffer();
    }

    printf("\nDatos Registrados:");
    for (int i = 0; i < 5; i++){
        printf("\nNombre: %s",personas[i].nombre);
        printf("\nEdad: %i",personas[i].edad);
    }
    
    return 0;
}

void limpiarBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}