#include<stdio.h>

int main(){
    int num=10;
    float decimal=89.639;
    char letra='a';

    int* punteroNum=&num;
    float* punteroDecimal=&decimal;
    char* punteroLetra=&letra;

    printf("\nValor Almacenado:\n");
    printf("\nVariable Int: %i",num);
    printf("\nApuntador Int: %i",*punteroNum);
    printf("\nVariable Float: %.2f",decimal);
    printf("\nApuntador Float: %.2f",*punteroDecimal);
    printf("\nVariable Char: %c",letra);
    printf("\nApuntador Char: %c",*punteroLetra);

    printf("\n\nPosicion de Memoria:\n");
    printf("\nVariable Int: %p",&num);
    printf("\nApuntador Int: %p",punteroNum);
    printf("\nVariable Float: %p",&decimal);
    printf("\nApuntador Float: %p",punteroDecimal);
    printf("\nVariable Char: %p",&letra);
    printf("\nApuntador Char: %p",punteroLetra);

    return 0;
}