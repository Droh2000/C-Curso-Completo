#include<stdio.h>

int main(){

    int num;

    printf("Ingrese un numero: ");
    scanf("%i", &num);

    if(num < 0){
        puts("El numero es negativo");
    }
    if (num > 0){
        puts("El numero es positivo");
    }
    
    return 0;
}