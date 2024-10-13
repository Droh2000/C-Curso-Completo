#include<stdio.h>

int main(){
    // Mostrar los 10 primeros numeros
    for (int i = 1; i <= 10; i++){// Ascendente
        printf("%i ",i);
    }
    
    for (int i = 10; i >= 1; i--){// Descendente
        printf("%i ",i);
    }
    
    return 0;
}