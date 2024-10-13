#include<stdio.h>

int main(){
    int n, suma = 0;
    printf("Ingrese la cantidad de numeros a sumar: ");
    scanf("%i", &n);

    int i = 1;
    while (i <= n){
        suma+=i;
        i++;
    }
    
    printf("La suma de los %i primeros numeros es: %i", n, suma);

    return 0;
}