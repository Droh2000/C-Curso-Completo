#include<stdio.h>
#include<string.h>

int main(){
    char nota;

    printf("Ingrese la nota de la califiacion");
    scanf("%c", &nota);

    strupr(nota);

    switch (nota){
    case 'A':
        printf("Excelente");
        break;
    case 'B':
        printf("Notable");
        break;
    case 'C':
        printf("Aprobado");
        break;
    case 'D':
    case 'F':
        printf("Reprobado");
        break;                
    default:
        printf("No ingreso en el rango correcto");
        break;
    }

    return 0;
}