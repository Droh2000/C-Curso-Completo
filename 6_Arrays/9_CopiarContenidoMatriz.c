#include<stdio.h>

int main(){
    int m1[2][2], m2[2][2];

    printf("Ingrese los datos de la matriz: \n");
    for (int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++){
            printf("[%i][%i]: ",i,j);
            scanf("%i",&m1[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++){
            m2[i][j] = m1[i][j];
        }
    }

    printf("\nMostrando la matriz copiada: \n");
    for (int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++){
            printf("[%i]",m2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}