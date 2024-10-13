#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char cad1[5], cad2[5];
    float valor1, valor2;

    printf("Ingrese un numero decimal: ");
    gets_s(cad1,5);

    printf("Ingrese otro numero decimal: ");
    gets_s(cad2,5);

    valor1 = atof(cad1);
    valor2 = atof(cad2);

    printf("La multiplicacion de los valores es: %.2f",(valor1*valor2));

    return 0;
}