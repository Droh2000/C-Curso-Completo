#include<stdio.h>

// El numero de columnas se tiene que especificar obligatoriamente
void sumar(int[][2],int[][2]);
void mostrarMatriz(int[][2]);

int main(){
    // Para poder sumar deben de tener las mismas lnogitudes
    int m1[2][2]={{2,1},{1,2}};
    int m2[2][2]={{1,2},{2,1}};

    /*printf("Ingrese los datos de la matriz: \n");
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
    }*/

    sumar(m1,m2);
    //mostrarMatriz(suma);
    return 0;
}

void sumar(int a[][2],int b[][2]){
    int suma[2][2];
    printf("\nSuma de las matrices: \n");
    for (int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++){
            suma[i][j]=(a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}

void mostrarMatriz(int a[][2]){
    printf("\nMostrando la matriz copiada: \n");
    for (int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++){
            printf("[%i]",a[i][j]);
        }
        printf("\n");
    }
}