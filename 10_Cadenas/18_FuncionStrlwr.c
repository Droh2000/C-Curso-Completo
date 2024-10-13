#include<stdio.h>
#include<string.h>

struct Datos{
    char nombre[20];
    char apellidos[20];
}datos1;

int main(){
    printf("Ingrese su nombre (En mayusculas): ");
    gets_s(datos1.nombre,20);
    printf("Ingrese su apellido (En mayusculas): ");
    gets_s(datos1.apellidos,20);

    strlwr(datos1.nombre);
    strlwr(datos1.apellidos);

    printf("\nSu Nombre es: %s",datos1.nombre);
    printf("\nSu Apellido es: %s",datos1.apellidos);

    return 0;
}