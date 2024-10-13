/*
    Metodo de Ordenamiento 

    Funciona revisando cada elemento de la lista que va a ser ordenada con el siguiente.
    Intercambiandolos de posicion si estan en el orden equivocado, es necesario revisar
    varias veces toda la lista hasta que no se necesiten mas intercambios, lo cual significa
    que la lista esta ordenada, hace que los elementos de menor valor vayan al inicio del arreglo

    Condicion:
        Si numeroActual > numeroSiguiente
            Cambio

    Es sencillo pero ineficiente para arreglos muy grandes
*/
#include<stdio.h>

int main(){
    int a[5] = {3,4,5,2,1};
    int aux;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5-1; j++){
            if(a[j] > a[j+1]){
                aux = a[j];
                a[j] = a[j+1];
                a[j+1] = aux;
            }
        }
    }

    // Mostrar Ascendente
    for (int i = 0; i < 5; i++){
        printf("%i ", a[i]);
    }
    printf("\n\n");
    // Mostrar Descendente
    for (int i = 4; i >= 0; i--){
        printf("%i ", a[i]);
    }

    return 0;
}