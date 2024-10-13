#include<stdio.h>

int main(){

    float caliF1, calif2, calif3, examFinal, trabajoFinal, promedio=0; 

    printf("Ingrese 3 calificaciones: ");
    scanf("%f %f %f", &caliF1, &calif2, &calif3);

    printf("Ingrese la calificacion del Examen Final: ");
    scanf("%f", &examFinal);

    printf("Ingrese la calificacion del Trabajo Final: ");
    scanf("%f", &trabajoFinal);

    promedio=((caliF1+calif2+calif3)/3)*0.55;
    examFinal *= 0.30;
    trabajoFinal *= 0.15;

    printf("La calificacion Final es: %.3f", (promedio+trabajoFinal+examFinal));

    return 0;
}