#include<stdio.h>

int main(){
    int hrTrabajadas;
    float precioHora, salario=0;

    printf("Ingrese las horas trabajadas: ");
    scanf("%i", &hrTrabajadas);
    printf("Ingrese el pago por hora: ");
    scanf("%f", &precioHora);

    salario=hrTrabajadas*precioHora;

    printf("El salario de la persona es: %.3f", salario);

    return 0;
}