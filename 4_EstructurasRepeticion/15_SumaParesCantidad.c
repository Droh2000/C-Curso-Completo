#include<stdio.h>

int main(){
    int n, suma=0, cant=0;

    printf("Ingrese la cantidad de Numeros:");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++){
        if(i % 2 == 0){
            suma+=i;
            cant++;
        }
    }
    
    printf("Cantidad de numeros pares: %i", cant);
    printf("\n");
    printf("La suma de los numeros pares es: %i", suma);
    
    return 0;
}