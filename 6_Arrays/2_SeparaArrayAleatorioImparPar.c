#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int numeroAletorio();
void llenarArreglo(int[], int, int*, int*);
void mostrarArreglo(int[], int);
int* getArrayPares(int[], int, int);
int* getArrayImpares(int[], int, int);

int main(){
    srand(time(NULL));// Afuera de la funcion para que genere diferentes numeros
    int array[100], contPares=0, contImpares=0;

    llenarArreglo(array, 100, &contPares, &contImpares);
    mostrarArreglo(array, 100);

    int* arrayPares = (int*)malloc(contPares * sizeof(int)); 

    if(arrayPares != NULL){
        printf("\nArreglo con los numeros Pares:\n");
        arrayPares=getArrayPares(array, 100, contPares);
        mostrarArreglo(arrayPares, contPares);
    }else{
        printf("Memoria Asignada No disponible");
    }

    int* arrayImpares = (int*)malloc(contImpares * sizeof(int)); 
    if(arrayPares != NULL){
        printf("\nArreglo con los numeros Impares:\n");
        arrayImpares=getArrayImpares(array, 100, contImpares);
        mostrarArreglo(arrayImpares, contImpares);
    }else{
        printf("Memoria Asignada No disponible");
    }

    return 0;
}

int numeroAletorio(){
    // Numeros entre 1 y 1000
    return 1+rand()%((1000+1)-1);
}

void llenarArreglo(int a[], int tam, int* contP, int* contI){
    for (int i = 0; i < tam; i++){
        a[i] = numeroAletorio();
        if(a[i] % 2 == 0){
            *contP+=1; // No funciona con ++
        }else{
            *contI+=1;
        }
    }
}

void mostrarArreglo(int a[], int tam){
    printf("\n");
    for(int i = 0; i < tam; i++){
        printf("[%i]", a[i]);
    }
}

int* getArrayPares(int a[], int tam, int contPares){
    int* temp = (int*)malloc(contPares * sizeof(int));
    if(temp != NULL){
        int j=0;
        for (int i = 0; i < tam; i++){
            if(a[i] % 2 == 0){
                temp[j]=a[i];
                j++;
            }
        }
    }else{
        printf("Memoria Asignada No disponible");
    }
    return temp;
}

int* getArrayImpares(int a[], int tam, int contImpares){
    int* temp = (int*)malloc(contImpares * sizeof(int));
    if(temp != NULL){
        int j=0;
        for (int i = 0; i < tam; i++){
            if(a[i] % 2 != 0){
                temp[j]=a[i];
                j++;
            }
        }
    }else{
        printf("Memoria Asignada No disponible");
    }
    return temp;
}