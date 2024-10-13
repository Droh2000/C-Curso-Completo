#include<stdio.h>
#include<math.h>

int main(){

    int n;

    printf("Ingrese un numero: ");
    scanf("%i", &n);

    if (n < 0){
        printf("Tiene Raiz Imaginaria");
    }else{
        printf("La raiz cuadrada es: %.3f",sqrt(n));
    }
    
    return 0;
}