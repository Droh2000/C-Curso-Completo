#include<stdio.h>

int main(){
    // Salida de Datos
    // Agrupar diferentes tipos de datos dentro de un solo Print
    int a = 10;
    float b = 15.5;
    char c = 'e';
    // En el mismo orden que especificamos los porcentajes colocamos las variables
    printf("%i %.1f %c",a,b,c);

    // Pedir datos al usuario
    int d;
    float e;
    char f;

    printf("Ingrese el valor de la variable d: ");
    // Le indicamos el tipo de dato que es con el porcentaje
    // Le decimos en que posicion de memoria lo vamos a guardar accediendo con el &NombreVariable
    scanf("%i",&d);
    printf("El valor es: %i",d);

    printf("Ingrese el valor de la variable e: ");
    scanf("%f",&e);
    printf("El valor es: %.3f",e);

    printf("Ingrese el valor de la variable f: ");
    scanf("%c",&f);
    printf("El valor es: %c",f);

    // Pedir Texto mas largo
    char x[20];
    printf("Ingrese su nombre: ");
    // s de String
    // Cuando sean bastantes caracteres o palabras no hace falta poner el &
    //scanf("%s",x);// Este solo toma hasta un espacio, despues ya corta
    gets_s(x,20);// Asi si guarda todo los datos
    printf("Un saludo Romano %s",x);

    return 0;
}