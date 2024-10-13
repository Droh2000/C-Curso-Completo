#include<stdio.h>

int main(){
    int a,b, sum, res, div, mult;
    sum=res=div=mult=0;

    /*printf("Ingrese un numero: ");
    scanf("%i",&a);

    printf("\nIngrese otro numero: ");
    scanf("%i",&b);*/

    // Ingresar los dos numeros de golpe
    printf("Ingrese dos numero: ");// Se ingresa uno y luego enter para poner el segundo o Separados por espacio los dos y enter
    scanf("%i %i",&a, &b);

    sum = a+b;
    printf("\nLa suma de %i + %i es: %i",a,b,sum);
    res = a-b;
    printf("\nLa resta de %i / %i es: %i",a,b, res);
    mult = a*b;
    printf("\nLa multiplicacion de %i * %i es: %i",a,b, mult);
    div=a/b;
    printf("\nLa divicion de %i / %i es: %i",a,b, div);

    return 0;
}