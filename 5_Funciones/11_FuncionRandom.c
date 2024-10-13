/*
    Funcion Aleatoria (Generar numeros Aleotorios)

    srand(NULL);
    variable = LimiteInferior + rand() % ((LimiteSuperior + 1) - LimiteInferior)
*/
#include<stdio.h>
#include<time.h> // Funcion del Tiempo
#include<stdlib.h>// Para SRAND

void funcionAleatoria();

int main(){
    funcionAleatoria();

    return 0;
}

void funcionAleatoria(){
    int numero;

    srand(time(NULL));// Cada vez que compilemos nos generara numero diferente

    // Generamos un numero aleatorios entre 1 y 10
    numero = 1 + rand() % ((10+1) - 1);
    printf("Numero entre 1-10: %i",numero);

    // 10 Numero aleatorios
    int li, ls;
    printf("Ingrese el limite inferior: ");
    scanf("%i", &li);
    printf("Ingrese el limite superior: ");
    scanf("%i", &ls);
    for (int i = 1; i <= 10; i++){
        numero = li + rand() % ((ls+1) - li);
        printf("\nNumero entre 1-10: %i",numero);
    }
    
}