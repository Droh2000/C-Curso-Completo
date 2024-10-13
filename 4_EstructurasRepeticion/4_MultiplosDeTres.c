#include<stdio.h>

int main(){
    int n, i = 1, mult = 3;
    printf("Ingrese la cantidad de multiplos que quiere: ");
    scanf("%i", &n);

    printf("Los multiplos de 3 son: \n");
    while (i <= n){
        if (i % 3 == 0){
            printf("%i ", i);
        }
        i++;
    }
    
    return 0;
}