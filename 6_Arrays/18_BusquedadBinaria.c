/*
        Busquedad Binaria o Dicotomica
    Aqui es requerido que el array este ordenado

    Esta busquedad es mucha mas rapida y por tanto mas eficiente
*/
#include<stdio.h>

int main(){
    int a[5]={1,2,3,4,5};// Elementos Ordenados
    int inf,sup,mitad,dato;
    char band = 'F';

    dato = 3;// Este es elemento a buscar

    inf=0;//Posicion inicial del arreglo
    sup=5;//Numero que contiene el arreglo

    while (inf<=sup){
        //Sacamos la mitad del arreglo
        mitad=(inf+sup)/2;
        //Si el dato a buscar esta justo en la mitad
        if(a[mitad]==dato){
            band = 'V';
            break;// Para que se salga del bucle
        }
        if(a[mitad]>dato){
            sup = mitad;
            mitad=(inf+sup)/2;
        }
        if(a[mitad]<dato){
            inf = mitad;
            mitad=(inf+sup)/2;
        }
    }

    if (band=='F'){
        printf("El elemento %i no exite en el arreglo",dato);
    }else{
        // Aqui la posicion se almacena en la variable Mitad del arreglo
        printf("El elemento %i exite en el arreglo en la posicion %i",dato,mitad);
    }

    return 0;
}