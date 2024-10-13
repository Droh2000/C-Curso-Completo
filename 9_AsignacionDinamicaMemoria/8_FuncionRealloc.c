/*
        Funcion Realloc()

    Esta funcion permite ampliar un bloque de memoria reservado anteriormente.
    La forma de llamar a la funcion Realloc() es:

        puntero = realloc(puntero a bloque, tamaño total de nuevo bloque);
    
    Entonces tenemos la memoria estatica donde se crean los datos cuando compilamos y
    se eliminan cuando termina nuestro ejecutable y tenemos la memoria dinamca
    Supongamos tenemos un puntero llamado array y al inicio tiene 3 elementos, pero Ahora 
    en lugar de tener solo 3, queremos que tenga 5 elementos, ahora gracias al uso de la 
    memoria dinamica podemos crear al inicio un array estatico y despues ampliarle el tamaño

    Recordemos que el array apunta directamente a la primera posicion de los elementos (De los 3 que tenemos)
    para pasar a que tenga (5 elementos) lo conseguimos con la funcion "realloc()"
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    // Primero creamos el arreglo con 3 elementos
    int *vector, *vectorAmpliado;

    vector = malloc(3 * sizeof(int));

    // Rellenamos los elementos
    vector[0]=1;
    vector[1]=2;
    vector[2]=3;

    for (int i = 0; i < 3; i++){
        printf("%i ",vector[i]);
    }

    // Aumentamos la cantidad de elementos a almacenar
    // Le Pasamos: VectorOriginal, TamanoAmpliar multiplicando por el tipo de dato
    vectorAmpliado = realloc(vector, 5*sizeof(int));

    // Asignando valores en las nuevas posiciones
    vector[3]=4;
    vector[4]=5;

    printf("\nVector Aumentado:\n");
    for (int i = 0; i < 5; i++){
        printf("%i ",vector[i]);
    }

    free(vector);
    free(vectorAmpliado);
    return 0;
}