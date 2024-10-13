#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_STRING_LENGTH 20

void pedirDatos(int*);
int llenarArregloPalabras(char**, int);
void mostrarPalabras(char**, int);
void ordenarPalabrasAlfabeticamente(char**, int);
void limpiarBuffer();

int main(){
    int size;
    char** strings = NULL;

    pedirDatos(&size);
    strings = (char**)malloc(size * sizeof(char*));
    
    if(llenarArregloPalabras(strings,size) != 1){
        ordenarPalabrasAlfabeticamente(strings,size);

        mostrarPalabras(strings, size);

        // Free memory for each string
        for (int i = 0; i < size; i++) {
            free(strings[i]);
        }
    }

    // Free memory for the array of pointers
    free(strings);
    return 0;
}

void pedirDatos(int *n){
    printf("Ingrese la cantidad de palabras: ");
    scanf("%i",&*n);
}

int llenarArregloPalabras(char** strings, int size){
     if (strings == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    char temp[MAX_STRING_LENGTH];
    // Asignar memoria para cada cadena y asignar valores
    for (int i = 0; i < size; i++) {
        // Asignar memoria para cada cadena
        strings[i] = (char*)malloc((MAX_STRING_LENGTH + 1)* sizeof(char));

        if (strings[i] == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            return 1;
        }else{
            limpiarBuffer();
            printf("Ingrese la palabra %i: ",i+1);
            gets_s(temp,MAX_STRING_LENGTH);
        }

        // Asignar valores a cada cadena
        sprintf(strings[i], temp);
    }
    return 0;
}

void mostrarPalabras(char** strings, int size){
    printf("\nMostrando Palabras Ordenadas:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", strings[i]);
    }
}

void ordenarPalabrasAlfabeticamente(char** strings, int size){
    // Aplicamos el ordenamiento por seleccion
    char* aux;
    int min;

    for (int i = 0; i < size; i++){
        min = i; 
        for (int j = i+1; j <= size-1; j++){
            if(strcmp(strings[j],strings[min])<0){
                min = j;
            }
        }
        // Hacemos el intercambio por posicion
        aux=strings[i];
        strings[i]=strings[min];
        strings[min]=aux;
    }
}

void limpiarBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}