#include<stdio.h>

#define PI 3.1416;

int main(){

    float r, longitud=0;

    printf("Ingrese el radio del circulo: ");
    scanf("%f", &r);

    longitud = 2*r*PI;

    printf("La longitud del circulo es: %.3f", longitud);

    return 0;
}