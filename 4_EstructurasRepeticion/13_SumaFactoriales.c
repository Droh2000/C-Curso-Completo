#include<stdio.h>

int main(){
    int n, mult=1, suma=0;

    printf("Ingrese la cantidad de numeros: ");
    scanf("%i", &n);

    printf("Suma de Factoriales: \n");
    for (int i = 1; i <= n; i++){
        printf("!%i ",i);
        for (int j = n; j >= 1; j--){
            mult*=j;
        }
        suma+=mult;
        mult=1;
    }
    
    printf("\nLa suma es: %i", suma);

    return 0;
}