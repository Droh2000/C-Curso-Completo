#include<stdio.h>

int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10}, *b;// En los punteros no hace falta espaecificar corchetes

    /*for (int i = 0; i < 10; i++){
        b[i]=&a[i];
    }*/
    // Estamos apuntando a la primera posicion del arreglo
    // Los valores del arreglo se almacenan adyacentemente uno detras de otro
    b = a;// b = a[0]
    
    printf("Posiciones y Valores del arreglo original: ");
    for (int i = 0; i < 10; i++){
        printf("\nDato: %i",a[i]);
        printf("\nMemoria: %p",&a[i]);
    }

    printf("\n\nPosiciones y Valores del arreglo puntero: ");
    for (int i = 0; i < 10; i++){
        // Con la asignacion de "b = a" si funciona esta sintaxis para imprimir
        // porque con el uso del bucle No funciona
        printf("\nDato: %i",*(b+i));
        printf("\nMemoria: %p",b+i);
        //b++ -> Incrementamos el apuntador para que se mueva a las demas posiciones 
    }

    /*
        Si nos fijamos en la posicion de memoria vemos que se va incrementando de 4 en 4
        esto es porque estamos usando una variable de tipo INT y esta tiene 4 bytes para
        reservarse en memoria entontes cada valor esta almacenado para ese espacio en memoria
        y ademas todos junto uno detras de otro
    */

    return 0;
}