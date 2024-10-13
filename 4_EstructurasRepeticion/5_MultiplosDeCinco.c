#include<stdio.h>

int main(){
    int n, i=1;

    printf("Ingresse el rango para sacar multiplos: ");
    scanf("%i", &n);

    printf("Los multiplos de 5 encontrados son:\n");
    while (i <= n){
        if (i % 5 == 0){
            printf("%i ", i);
        }
        i++;
    }
    
    return 0;
}