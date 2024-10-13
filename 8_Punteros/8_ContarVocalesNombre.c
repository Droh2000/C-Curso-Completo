#include<stdio.h>
#include<string.h>

void cuentaVocales(char *);

int main(){
    char nombre[20];

    printf("Ingrese su nombre: ");
    gets_s(nombre,20);
    printf("\nNumero de Vocales: \n");
    cuentaVocales(nombre);

    return 0;
}

void cuentaVocales(char *nom){
    int contA,contE,contI,contO,contU; 
    contA=contE=contI=contO=contU = 0;

    strlwr(nom);

    while(*nom){
        switch (*nom){
            case 'a':
                contA++;
                break;
            case 'e':
                contE++;
                break;
            case 'i':
                contI++;
                break;
            case 'o':
                contO++;
                break;
            case 'u':
                contU++;
                break;
        }
        nom++;
    }
    printf("\nVocal A: %i",contA);
    printf("\nVocal E: %i",contE);
    printf("\nVocal I: %i",contI);
    printf("\nVocal O: %i",contO);
    printf("\nVocal U: %i",contU);
}