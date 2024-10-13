#include<stdio.h>

int main(){
    float cels = 0, fah = 0;

    printf("Ingrese los grados Celsius: ");
    scanf("%f", &cels);

    fah = (cels*1.8f)+32;

    printf("\nLos grados Fahrenheit es: %.3f",fah);

    return 0;
}