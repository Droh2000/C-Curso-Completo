#include<stdio.h>

int main(){
    int n, x=0, y=1, z=1;

    printf("Ingrese la cantidad de numeros: ");
    scanf("%i", &n);

    printf("Serie de Fibonacci: \n");
    printf("1 ");
    for (int i = 1; i <=n; i++){
        z = x + y;
        x = y;
        y = z;

        printf("%i ",z);
    }
    
    return 0;
}