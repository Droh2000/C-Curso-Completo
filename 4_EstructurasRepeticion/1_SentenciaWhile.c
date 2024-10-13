#include<stdio.h>

int main(){
    // Mostrar los 10 primeros numeros en pantalla
    int i;
    i = 1;

    while (i <= 10){// Ascendente
        printf("%i ", i);
        i++;
    }

    i = 10;
    while (i >= 1){// Descendente
        printf("%i ", i);
        i--;
    }

    // Mostrar 5 astediscos
    i=1;
    while (i<=5){
        printf("*");
        i++;
    }
    
    return 0;
}