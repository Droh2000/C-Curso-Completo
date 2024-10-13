/*
    Es una manera muy natural de ordenar para un ser humano y puede usarse facilmente
    para ordenar un mazo de cartas numericas en forma arbitarias, requiere de O(n^2) 
    operaciones para ordenar una lista de N-elementos

    Aqui siempre vamos a ir avanzando hacia adelante de posicion en posicion comprobado si
    el elemento de su izquierda ya es menor que el, si no hay nada a la izquieda avanza
        Condicion:
            Si numeroIzq > numeroActual
                Cambio
    Despues de haber intercambiado un numero se vuelve a comprobar la condicion con ese numero
    intercambiado y el elemento que tenga a su izquierda (Asi se sigue comprobando e intercambiando
    con cada movimiento de numero), cuando no existan numeros que intercambiar termina el algoritmo
*/
#include<stdio.h>

int main(){
    int a[5]={3,1,4,2,5};
    // Podemos probar ordenando caracteres
    //char a[5]={'e','i','u','o','a'};
    int pos, aux;

    for (int i = 0; i < 5; i++){
        pos = i;//Guardamos en que posicion estamos de la iteracion
        aux = a[i];// Almacenamos el valor en el que vamos dle arreglo
        // aux debe ser menor al numero que esta a su izquierda en ese caso se tiene que intercambiar
        while (pos>0 && aux<a[pos-1]){//Intercambiamos mientras no sea el primero de la lista porque a su izquieda no hay nada
            //Intercambiamos el numero de su izquierda con el dato
            a[pos] = a[pos-1];
            pos--;
        }
        a[pos] = aux;
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