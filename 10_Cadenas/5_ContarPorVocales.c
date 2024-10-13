#include<stdio.h>

int main(){
    int c, contA, contE, contI, contO, contU;
    contA=contE=contI=contO=contU=0;

    printf("Ingrese una frase y para terminar pulse Ctrl+Z:\n");
    while (EOF != (c=getchar())){
        switch (c){
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
    }

    printf("\nCantidad de Vocales que tiene:\n");
    printf("A: %i",contA);
    printf("\nE: %i",contE);
    printf("\nI: %i",contI);
    printf("\nO: %i",contO);
    printf("\nU: %i",contU);
    

    return 0;
}