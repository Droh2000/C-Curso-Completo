#include<stdio.h>

int main(){
    int a[10], *b;

    b = a;

    printf("Ingrese los numeros en el array: \n");
    for (int i = 0; i < 10; i++){
        printf("[%i]: ",i+1);
        scanf("%i",&a[i]);
        printf("\n");
    }
    
    printf("\n\nPosiciones y Valores de Pares en el Arreglo: ");
    for (int i = 0; i < 10; i++){
        if(*b % 2 == 0){
            printf("\nDato: %i",*b);
            printf("\nMemoria: %p",b);
        }
        b++;
    }

    return 0;
}