/*
    Funcion Calloc():

        puntero = calloc(numero de elementos, tamaño de cada elemento);

    Esta tambien reserva espacio en la memoria dinamica
    Su funcionalidad es como la de Malloc() solo que ahora nos se multiplica
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    // Para Variables
    int *p1;

    // Reservamos espacio dentro de la memoria dinamica
    p1 = calloc(1,sizeof(int));
    *p1 = 15;
    printf("%i",*p1);

    // Para Arreglo
    int *arr;
    
    arr = calloc(5, sizeof(int));

    printf("\nIngrese numeros: \n");
    for (int i = 0; i < 5; i++){
        printf("%i: ",i+1);
        scanf("%i", &*(arr+i));
    }

    printf("\nMostrando Arreglo:\n");
    for (int i = 0; i < 5; i++){
        printf("%i ",*(arr+i));
    }

    free(p1);
    free(arr);
    return 0;
}