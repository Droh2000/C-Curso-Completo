#include<stdio.h>

int main(){

    float desc, compra, compraTot=0;

    printf("Ingrese el precio de la compra: ");
    scanf("%f",&compra);

    desc = compra*0.15f;

    compraTot = compra-desc;

    printf("El precio a pagar con descuento es: $%.2f",compraTot);

    return 0;
}