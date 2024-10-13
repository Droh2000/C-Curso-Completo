#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char cad1[5], cad2[5];
    int valor1, valor2;

    printf("Ingrese un numero: ");
    gets_s(cad1,5);

    printf("Ingrese otro numero: ");
    gets_s(cad2,5);

    valor1 = atoi(cad1);
    valor2 = atoi(cad2);

    printf("La suma de los valores es: %i",(valor1+valor2));

    return 0;
}