#include<stdio.h>
#include<stdlib.h>

void copianoArrays(int[],int[],int);
void mostrandoArray(int[],int);

int main(){

    int b[5],a[]={1,2,3,4,5};
    
    copianoArrays(a,b,5);
    
    mostrandoArray(b,5);

    printf("\n");
    system("pause");
    return 0;
}

void copianoArrays(int a[],int b[],int tam){
    for (int i = 0; i < tam; i++){
        b[i] = a[i];
    }
}

void mostrandoArray(int arr[],int tam){
    printf("Mostrando arreglo B:\n");
    for (int i = 0; i < tam; i++){
        printf("[%i]",arr[i]);
    }
}