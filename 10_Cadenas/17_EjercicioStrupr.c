#include<stdio.h>
#include<string.h>

struct Usuario{
    char nom[25];
    char ape[25];
    char ciudad[25]; 
} u1;


int main(){
    printf("Ingrese un nombre: ");
    gets_s(u1.nom,25);
    printf("Ingrese el apellido: ");
    gets_s(u1.ape,25);
    printf("Ingrese la ciudad: ");
    gets_s(u1.ciudad,25);

    strupr(u1.nom);
    strupr(u1.ape);
    strupr(u1.ciudad);

    printf("\nDatos\n");
    printf("\nNombre: %s",u1.nom);
    printf("\nApellido: %s",u1.ape);
    printf("\nCiudad: %s",u1.ciudad);

    return 0;
}