#include<stdio.h>
#include<stdlib.h>

int main(){
    int fil, col;

    printf("Ingrese la cantidad de filas: ");
    scanf("%i", &fil);

    printf("Ingrese la cantidad de Columnas: ");
    scanf("%i", &col);

    int* m1 = (int *)malloc((fil*col) * sizeof(int));

    printf("Ingrese los datos de la matriz: \n");
    for (int i = 0; i < fil; i++) {
        for(int j = 0; j < col; j++){
            printf("[%i][%i]: ",i,j);
            scanf("%d",&m1[i*fil+j]);
        }
    }

    printf("La matriz es:\n");
    for (int i = 0; i < fil; i++) {
        for(int j = 0; j < col; j++){
            printf("[%i]",m1[i*fil+j]);
        }
        printf("\n");
    }

    free(m1);
    return 0;
}