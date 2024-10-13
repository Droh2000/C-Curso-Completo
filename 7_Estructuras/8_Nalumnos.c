#include<stdio.h>
#include<string.h>
#include<stdlib.h>

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
} *alum;

void limpiarBuffer();

int main(){
    float promMayor=0.0f,prom;
    int n, pos;
    
    printf("Ingrese la cantidad de alumnos a registrar: ");
    scanf("%i",&n);

    alum = (struct Alumno*) malloc(n * sizeof(struct Alumno));

    printf("Registre los datos de los alumnos:\n");
    for (int i = 0; i < n; i++){    
        limpiarBuffer();
        printf("Nombre: ");gets_s(alum[i].nombre,25);
        printf("Genero(M/F): ");scanf("%c%*c",&alum[i].genero);
        printf("Edad: ");scanf("%i",&alum[i].edad);
        printf("Nota 1: ");scanf("%f",&alum[i].calif.nota1);
        printf("Nota 2: ");scanf("%f",&alum[i].calif.nota2);
        printf("Nota 3: ");scanf("%f",&alum[i].calif.nota3);
        prom=(alum[i].calif.nota1+alum[i].calif.nota2+alum[i].calif.nota3)/3;
        if(prom > promMayor){
            promMayor=prom;
            pos=i;
        }
        printf("\n\n");
    }

    printf("\nEl Alumno con mejor promedio es:\n\n");
    printf("Nombre: %s",alum[pos].nombre);
    printf("\nGenero: %c",alum[pos].genero);
    printf("\nEdad: %i",alum[pos].edad);
    printf("\nPomedio: %.2f",promMayor);

    free(alum);
    return 0;
}

void limpiarBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}