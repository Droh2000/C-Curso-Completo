#include<stdio.h>

void pedirDatos();
void mostrarArreglo(int[], int);
void metodoBurbuja(int[],int);
void busquedadBinaria(int[], int, int);

int main(){

    pedirDatos();

    return 0;
}

void pedirDatos(){
    int a[10]={9,8,7,6,5,4,3,2,1,10};
    printf("\nArreglo Desordenado\n");
    mostrarArreglo(a,10);
    printf("\nArreglo Ordenado:\n");
    metodoBurbuja(a,10);
    mostrarArreglo(a,10);

    int dato;
    printf("\nIngrese el dato a buscar en el arreglo: ");
    scanf("%i",&dato);

    busquedadBinaria(a,10,dato);
}

void mostrarArreglo(int a[], int tam){
    for (int i = 0; i < tam; i++){
        printf("[%i]",a[i]);
    }
    printf("\n");
}

void metodoBurbuja(int a[],int tam){
    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam-1; j++){
            if (a[j] > a[j+1]){
                int aux=a[j];
                a[j]=a[j+1];
                a[j+1]=aux;
            }
        }        
    }
}

void busquedadBinaria(int a[], int tam, int dato){
    char band = 'F';
    int inf=0,sup=tam,mitad;

    while(inf <= sup){// Cuidado: Bucle infinito si se ingresa un valor que no existe
        mitad=(inf+sup)/2;
        if(a[mitad]==dato){
            band='V';
            break;
        }
        if(a[mitad]>dato){
            sup=mitad;
            mitad=(inf+sup)/2;
        }
        if(a[mitad]<dato){
            inf=mitad;
            mitad=(inf+sup)/2;
        }
        printf("\nvalor de inf: %i",inf);
        printf("\nvalor de sup: %i",sup);
        printf("\nvalor de mitad: %i",mitad);
    }
    
    if (band=='F'){
        printf("\nEl elemento %i no exite en el arreglo",dato);
    }else{
        // Aqui la posicion se almacena en la variable Mitad del arreglo
        printf("\nEl elemento %i exite en el arreglo en la posicion %i",dato,mitad);
    }
}

