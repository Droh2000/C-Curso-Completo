/*
    Sentencia IF/Else

    if(Condicion){
        Accion1
    }else{
        Accion2
    }
*/
#include<stdio.h>

int main(){

    float nota;

    printf("Ingrese la nota del examen: ");
    scanf("%f", &nota);

    if(nota > 10.5){
        puts("El alumno esta aprobado");
    }else{
        puts("El alumno esta desaprobado");
    }

    return 0;
}