#include<stdio.h>

int main(){
    float nota;

    printf("Ingrese la nota del alumno: ");
    scanf("%f", &nota);

    if(nota >= 70)
        // Otra forma de imprimir en pantalla
        // puts() -> Solo imprime dentro de un condicional
        puts("El alumno aprobo el examen");

    return 0;
}