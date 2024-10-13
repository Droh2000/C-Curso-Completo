#include<stdio.h>
#include<stdlib.h>// Para poder usar Malloc

int main(){
    // Uso de memoria estatica
    int a;
    a=10;
    printf("Memoria estatica: %i \n",a);

    // Uso de memoria Dinamoca
    int *b;
    // Reservamos memoria en la maquina para poder almacenar un valor
    // Muchos recomiendan hacer el casting para asegurarnos que nos regres el tipo de dato indicado
    b = (int *)malloc(sizeof(int));// sizeof() -> Es para sacar el tamaño del tipo de datos indicado

    // Para comprobar el tamaño en bytes del tipo de dato INT
    int x;
    x=sizeof(int);
    printf("Tamaño en Bytes de INT: %i",x);

    // Almacenando Valor
    *b = 5;
    printf("\nMemoria Dinamica: %i \n",*b);
    
    return 0;
}