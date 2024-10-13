#include<stdio.h>
#include<string.h>

struct Datos{
    char nombre[20];
    char apellidos[20];
}datos1[3];

int main(){
    for (int i = 0; i < 3; i++){
        printf("Ingrese su nombre (En mayusculas): ");
        gets_s(datos1[i].nombre,20);
        printf("Ingrese su apellido (En mayusculas): ");
        gets_s(datos1[i].apellidos,20);   
        strlwr(datos1[i].nombre);
        strlwr(datos1[i].apellidos);
    }

    for (int i = 0; i < 3; i++){
        printf("\nSu Nombre es: %s",datos1[i].nombre);
        printf("\nSu Apellido es: %s",datos1[i].apellidos);
    }

    return 0;
}