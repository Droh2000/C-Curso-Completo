#include<stdio.h>
#include<stdlib.h>
#define TOPE 1000

int main(){
    // Ademas comprobar si la asignacion dinamica no regresa NULL
    double *array;

    array = malloc(TOPE * sizeof(double));

    if (array == NULL){
        printf("Error en la asignacion de memoria");
        return -1;// Intentar Recuperar memoria
    }else{
        // llenamos el arreglo con numeros aleatorios
        srand(time(NULL));
        for (int i = 0; i < TOPE; i++){
            array[i] = 1 + rand() % ((TOPE+1) - 1);
            printf("%lf.\n",array[i]);
        }
    }

    return 0;
}