#include<stdio.h>

int main(){
    int n, i=0, cont=1;
    printf("Ingrese un numero: ");
    scanf("%i", &n);

    if(n > 10){
        i=1;
        while (i <= 10){
            cont*=i;
            i++;
        }
    }else if(n <= 10){
        while (i <= 10){
            cont+=i;
            i++;
        }
    }else{
        printf("El numero no puede ser negativo");
    }

    printf("El resultado de la operacion es: %i", cont);

    return 0;
}