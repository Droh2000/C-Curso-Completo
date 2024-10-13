#include<stdio.h>

int main(){
    char letra = 'e';// Tamaño: 1 byte, Rango: 0-255
    // Imprimimos el caracter
    printf("La letra es: %c",letra);

    short mini = -15;// Tamaño: 2 byte, Rango: -128-127
    printf("\nEl short es: %i",mini);

    int num = 1024; // Tamaño: 2 byte, Rango: -32768-32767
    printf("\nEl Entero es: %i",num);

    // Este es un entero que solamente puede ser positivo
    unsigned int pos = 128;// Tamaño: 2 byte, Rango: 0-65535
    printf("\nEl Entero Positivo es: %i",pos);

    long largo = 123456;// Tamaño: 4 byte, Rango: -2147483648-2147483637
    printf("\nEl Long es: %li",largo);// li es long int

    float decimal = 15.678;// Tamaño: 4 byte, Rango: 3.4*10-3.4*10
    printf("\nEl Float es: %.3f",decimal);

    double deciLargo = 12456.12456;// Tamaño: 8 byte, Rango: 1.7*10-1.7*10
    printf("\nEl Double es: %lf",deciLargo);// lf es Long Float

    long double muydecilargo = 123456987.123457895;// Tamaño: 8 byte, Rango: 1.7*10-1.7*10
    printf("\nEl Double es: %lf",muydecilargo);

    return 0;
}