#include<stdio.h>
#include<string.h>

struct Promedio{
    float nota1;
    float nota2;
    float nota3;
};

struct Alumno{
    char nombre[25];
    char genero;
    int edad;
    struct Promedio calif;
} alum;

void limpiarBuffer();

int main(){
    float prom=0;

    printf("Registre los datos del alumno:\n");
    limpiarBuffer();
    printf("Nombre: ");gets_s(alum.nombre,25);
    printf("Genero(M/F): ");scanf("%c%*c",&alum.genero);
    printf("Edad: ");scanf("%i",&alum.edad);
    printf("Nota 1: ");scanf("%f",&alum.calif.nota1);
    printf("Nota 2: ");scanf("%f",&alum.calif.nota2);
    printf("Nota 3: ");scanf("%f",&alum.calif.nota3);

    prom=(alum.calif.nota1+alum.calif.nota2+alum.calif.nota3)/3;

    printf("\nDatos Registrados:\n\n");
    printf("Nombre: %s",alum.nombre);
    printf("\nGenero: %c",alum.genero);
    printf("\nEdad: %i",alum.edad);
    printf("\nPomedio: %.2f",prom);

    return 0;
}

void limpiarBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}