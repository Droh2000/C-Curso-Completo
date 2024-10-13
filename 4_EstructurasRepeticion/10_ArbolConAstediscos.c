#include<stdio.h>

int main(){
    int n;

    printf("Ingrese el numero de filas del arbol: ");
    scanf("%i", &n);
    printf("\n");
    int j=1;
    for (int i = 1; i <= n; i++){
        for (int i = 1; i <= j; i++){
            printf("*");
        }
        j++;
        printf("\n");
    }
    

    return 0;
}