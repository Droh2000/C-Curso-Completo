#include<stdio.h>

int main(){
    int a,b,c;
    float prom=0;

    printf("Ingrese 3 numeros: ");
    scanf("%i %i %i",&a,&b,&c);

    prom=(a+b+c)/3;

    printf("\nEL promedio de los tres numeros es: %.2f",prom);

    return 0;
}