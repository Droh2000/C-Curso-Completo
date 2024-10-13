#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    float *arr;

    printf("Ingrese la cantidad de elementos para el arreglo: ");
    scanf("%i",&n);

    arr = calloc(5,sizeof(float));

    printf("Ingrese los elementos: \n");
    for (int i = 0; i < n; i++){
        printf("%i: ",i+1);
        scanf("%f", &*(arr+i));
    }
    
    printf("\nElementos del arreglo: \n");
    for (int i = 0; i < n; i++){
        printf("%.2f ",*(arr+i));
    }

    free(arr);
    return 0;
}