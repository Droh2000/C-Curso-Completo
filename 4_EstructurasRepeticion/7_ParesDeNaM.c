#include<stdio.h>

int main(){
    int n, m, suma = 0, i;

    printf("Ingrese el inicio para sumar: ");
    scanf("%i", &n);
    printf("Ingrese el final para sumar: ");
    scanf("%i", &m);
    if(n < m && m > n){
        i = n;
        while (i <= m){
            if(i % 2 == 0){
                suma += i;
            }    
            i++;
        }
        printf("El resultado del a suma es: %i",suma);
    }else{
        printf("\nEl valor de inicio debe ser menor al final");
    }

    return 0;
}