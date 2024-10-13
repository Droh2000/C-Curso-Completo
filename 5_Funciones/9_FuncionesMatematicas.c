/*
    Funciones:
        ceil(X)   -> Redondea al proximo entero mas cercano
        fabs(x)   -> Devuelve el valor absoluto de X
        floor(x)  -> Redondea por defecto al entero mas proximo
        fmod(x,y) -> Calcula el resto de la divicion de x/y
        pow(x,y)  -> Calcula X elevado a la potencia Y
        sqrt(x)   -> Devuelve la raiz cuadrada de X

    Estas librerias no requieren importar la libreria Math.h
*/
#include<stdio.h>

void funcionesMatematicas();

int main(){

    funcionesMatematicas();

    return 0;
}

void funcionesMatematicas(){
    float x, y;

    printf("Ingrese un numero: ");
    scanf("%f", &x);

    int z,k;

    printf("Ingrese dos numeros Enteros: ");
    scanf("%i %i", &z, &k);

    printf("\nCeil(%.2f) = %.2f",x,ceil(x));// .1 a .9 Siempre redondea al siguiente numero entero
    printf("\nFabs(%.2f) = %.2f",x,fabs(x));
    printf("\nFloor(%.2f) = %.2f",x,floor(x));//.1 a .9 Este redondea al numero anterior proximo
    printf("\nFmod(%i,%i) = %i",z,k,fmod(z,k));
    printf("\nPow(%i,%i) = %i",z,k,pow(z,k));
    printf("\nSqrt(%i) = %i",z,fmod(z));

}