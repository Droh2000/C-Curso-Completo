#include<stdio.h>

int main(){
    int num;

    printf("Ingrese un numero entre 1-3: ");
    scanf("%i",&num);

    // El selector del Switch solo puede ser entera o char
    switch (num){
        case 1:
            printf("Es el numero 1");
            break;
        case 2:
            printf("Es el numero 2");
            break;
        case 3:
            printf("Es el numero 3");
            break;
        default:
            printf("No digito el numero indicado");
            break;
    }

    char vocal;

    printf("Ingrese una vocal: ");
    scanf("%c",&vocal);

    switch (vocal){
        case 'a':
            printf("Es la vocal A");
            break;
        case 'e':
            printf("Es la vocal E");
            break;
        case 'i':
            printf("Es la vocal I");
            break;
        case 'o':
            printf("Es la vocal O");
            break;
        case 'u':
            printf("Es la vocal U");
            break;    
        default:
            printf("No Ingreso una Vocal");
            break;
    }

    return 0;
}