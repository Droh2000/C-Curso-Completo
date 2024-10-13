#include<stdio.h>
#include<stdlib.h>

int main(){
    //int a[5]; -> No puede ser Estatico
    int* a = malloc(5 * sizeof(int));
    int i=0;
    printf("Ingrese los numeros: \n");
    for (i = 0; i < 5; i++){
        printf("%i.: ",i+1);
        scanf("%i",&a[i]);
    }

    a = realloc(a,10*sizeof(int));

    printf("\nIngrese 5 numeros mas: \n");
    for (; i < 10; i++){
        printf("%i.: ",i+1);
        scanf("%i",&a[i]);
    }

    printf("\nArreglo Completo:\n");
    for (int j=0; j < 10; j++){
        printf("%i ",a[j]);
    }

    free(a);
    return 0;
}