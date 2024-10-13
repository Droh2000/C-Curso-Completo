#include<stdio.h>
#include<stdlib.h>

// El numero de columnas se tiene que especificar obligatoriamente
void llenarMatriz(int*,int,int);
void mostrarMatriz(int*,int,int);
void sumar(int*,int*,int*,int,int);

int main(){
    // Para poder sumar deben de tener las mismas longitudes
    int*m1,*m2, *mSuma, fil,col;

    do{
        printf("Ingrese el numero de filas: ");
        scanf("%i", &fil);
        printf("Ingrese el numero de columnas: ");
        scanf("%i", &col);
    }while (fil != col);

    m1=(int *)malloc((fil*col) * sizeof(int));
    m2=(int *)malloc((fil*col) * sizeof(int));
    mSuma=(int *)malloc((fil*col * sizeof(int)));

    printf("\n\tMatriz1:\n");
    llenarMatriz(m1,fil,col);
    printf("\n\tMatriz2:\n");
    llenarMatriz(m2,fil,col);

    sumar(m1,m2,mSuma,fil,col);
    mostrarMatriz(mSuma,fil,col);

    free(m1);
    free(m2);
    free(mSuma);
    return 0;
}

void llenarMatriz(int* m, int fil, int col){
    printf("Ingrese los datos de la matriz: \n");
    for (int i = 0; i < fil; i++) {
        for(int j = 0; j < col; j++){
            printf("[%i][%i]: ",i,j);
            scanf("%i",&m[i*fil+j]);
        }
    }
}

void mostrarMatriz(int* m, int fil, int col){
    printf("\nMostrando la matriz Suma: \n");
    for (int i = 0; i < fil; i++) {
        for(int j = 0; j < col; j++){
            printf("[%i]",m[i*fil+j]);
        }
        printf("\n");
    }
}


void sumar(int* a,int* b,int* suma,int fil,int col){
    for (int i = 0; i < fil; i++) {
        for(int j = 0; j < col; j++){
            suma[i*fil+j]=(a[i*fil+j] + b[i*fil+j]);
        }
    }
}