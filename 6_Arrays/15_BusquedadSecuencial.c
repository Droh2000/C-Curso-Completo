/*
    Vamos a determinar si un elemento existe o no a un array
    
    La ventaja de este metodo es que no requeire que el array este ordenada
    a diferencia de la busquedad binaria que si lo requiere en orden ascendente

*/
#include<stdio.h>

int main(){
    int a[5]={3,2,5,4,1};
    // Tambien podemos buscar Carateres 
    //char a[5]={'a','b','c','d','e'};
    char band = 'F';

    int i=0,dato;// Este es el dato a buscar

    dato = 4;// Queremo saber si el 4 esta o no dentro del array

    while (band=='F' && i<5){
        if (a[i] == dato){// Comprobamos por cada elemento
            band='V'; // Al cambiar la bandera el bucle ya no se cumple y se sale
        }
        i++;
    }

    if(band=='F'){
        printf("El numero no exite en el Array");
    }else{
        printf("El numero %i si exite en el Array en la posicion %i",dato,i-1);// ES resta uno a I porque se incrementa despues de salir del condicional
    }

    return 0;
}