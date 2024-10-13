#include<stdio.h>

int main(){
    int n, i=1, suma = 0;
    printf("Ingrese la cantidad de elementos: ");
    scanf("%i", &n);

    printf("Operacion: ");
    while (i<=n){
        if(i % 2 == 0){
            suma-=i;
            printf("-%i",i);
        }
        if(i % 2 != 0){
            suma+=i;
            printf("+%i",i);
        }
        i++;
    }
    printf(" = %i", suma);

    return 0;
}