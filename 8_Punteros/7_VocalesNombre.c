#include<stdio.h>
#include<string.h>

int cuentaVocales(char *);

int main(){
    char nombre[20];

    printf("Ingrese su nombre: ");
    gets_s(nombre,20);
    // Como es un arreglo se pasa sin el &
    printf("\nNumero de Vocales: %i",cuentaVocales(nombre));

    return 0;
}

int cuentaVocales(char *nom){
    int cont = 0;
    strlwr(nom);
    /*printf("\nPalabra: %s",nom);
    printf("\nMemoria: %p",&nom);
    printf("\nLongitud: %i",strlen(nom));
    for (*nom; *nom != NULL; nom++){
        if(*nom=='a'){
            cont++;
        }
        //nom++;
    }*/

    // Mientras que num no sea NULL (Mientras no sea el final de la cadena)
    // Le enviamos el char como parametro y este puntero va apuntar a la primera
    // letra del string que encuentre (Ademas todo String termina con '\0')
    while(*nom){
        switch (*nom){// Verificamos en la letra que vayamos
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cont++;
                break;
        }
        nom++;
    }
    return cont;
}