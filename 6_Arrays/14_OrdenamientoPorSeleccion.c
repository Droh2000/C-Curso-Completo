/*
    Es un algoritmo de ordenamiento que requiere O(n^2) operaciones
    para ordenar una lista de n numero, su funcionamiento es el
    siguiente:
        1. Buscar el minimo elemento de la lista
        2. Intercambiar con el primero elemento
        3. Buscar el minimo del resto de la lista
        4. Intercambiar con el segundo 
        5. Y asi sucesivamente
    
    Entonces recorremos el array desde la posicion 0 y ejecutamos los pasos 
    de arriba intercambiando los valores

*/
#include<stdio.h>

int main(){
    int a[5] = {2,3,5,4,1};
    int aux, min;

    for (int i = 0; i < 5; i++){
        min = i; // Suponemos que minimo esta en la primera posicion
        // i+1 porque ya tenemos la primera porsicion y solo queremos revisar los numeros restantes
        // <= Queremos que nos revise todos los elementos hasta un elemento despues del array
        for (int j = i+1; j <= 4; j++){
            //Comprobamos si el valor minimo seleccionado es el correcto
            if(a[j] < a[min]){
                min = j;//Elegimos el verdadero valor minimo
            }
        }
        // Hacemos el intercambio por posicion
        aux=a[i];
        a[i]=a[min];
        a[min]=aux;
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