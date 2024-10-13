/*
        Funciones:
            acos(x)  -> Calcula el arco coseno de X
            asin(x)  -> Calcula el arco seno de X
            atan(x)  -> Calcula el arco tangente de X
            cos(x)   -> Calcula el coseno del angulo X en radianes
            sin(x)   -> Calcula el seno del angulo X en radianes
            tan(x)   -> Devuelve la tangente del angulo X en radianes
*/
#include<stdio.h>
#include<math.h>// Aqui si es necesario importar la libreria Math

void funcionesTrigonometricas();

int main(){

    funcionesTrigonometricas();

    return 0;
}

void funcionesTrigonometricas(){
    float angulo;

    printf("Ingrese un valor: ");
    scanf("%f", &angulo);

    printf("\nAcos(%f) = %f", angulo,acos(angulo));// El Numero debe estar entre -1 y 1
    printf("\nAsin(%f) = %f", angulo,asin(angulo));// Igual entre -1 y 1
    printf("\nAtan(%f) = %f", angulo,atan(angulo));// Este si es de numeros mayores
    printf("\nCos(%f) = %f", angulo,cos(angulo));
    printf("\nSin(%f) = %f", angulo,sin(angulo));
    printf("\nTan(%f) = %f", angulo,tan(angulo));
}
