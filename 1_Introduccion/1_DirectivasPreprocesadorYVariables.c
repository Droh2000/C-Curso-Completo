/*

    Las Directivas del Preprocesador contiene las librerias y las Macros
     
    Existen ya varias librerias que podemos utilizar pero veamos
    que para importarlas empiezan con "include" 
*/
#include<stdio.h>

// Las Macros (Estas nos sirven para definir una variable que vamos a utilizar a lo largo del programa)
// Estas empiezan con un "defined" 
// Las Macros nos siven para asignar un valor a una variable que nunca cambiara su valor
#define PI 3.1416

int y = 5; // Variable Global

int main(){
    // Creacion de Variables (Valor guardado en una posicion de memoria)
    int x = 10;// Variable Local

    // Operaciones aritmeticas
    float suma = 0;

    suma = PI + x;

    // Para imprimir el resultado tenemos que indicarle que tipo de dato es (En este caso es de tipo entero)
    // El %i va a tomar todo el contenido que tiene la variable "suma"
    // Despues cambiar el tipo a Float entonces cambiamos a %f
    // Limitar el numero de decimales .2 -> Mostrar solo dos decimales despues del punto (Por defecto Redondea)
    printf("La suma es: %.2f", suma);

    return 0;
}
