#include<stdio.h>

int main(){
    int n;

    printf("Ingrese un numero: ");
    scanf("%i", &n);

    if(n % 2 == 0){
        printf("El numero es Par");
    }

    if(n % 2 != 0){
        printf("El numero es Impar");
    }

    return 0;
}