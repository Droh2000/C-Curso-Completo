/*
    Sintaxis:
        TipoDato nombreArray[NumFilas][NumColumnas]

    Inicializacion:
        int tabla[2][3] = {51,52,53,54,55,56};

        int tabla[2][3] = {{51,52,53},{54,55,56}};

    Acceder:
        tabla[0][1] -> Fila 0 Columna 1
*/
#include<stdio.h>

int main(){
    // 2 Filas  3 Columnas
    int matriz[2][3] = {{1,2,3},{4,5,6}};
    for (int filas = 0; filas < 2; filas++){
        for (int columnas = 0; columnas < 3; columnas++){
            printf("%i ",matriz[filas][columnas]);
        }
        printf("\n");
    }
    
    float m2[2][3];
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("Digite un numero en [%i][%i]: ", i+1,j+1);
            scanf("%f",&m2[i][j]);
        }
    }
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("[%.2f]",m2[i][j]);
        }
        printf("\n");
    }

    char m3[2][3]={{'a','b','c'},{'d','e','f'}};

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("[%c]",m3[i][j]);
        }
        printf("\n");
    }

    return 0;
}