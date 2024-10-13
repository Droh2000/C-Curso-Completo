#include<stdio.h>

int main(){
    // Mostrar los 10 primeros numeros
    int i = 1;

    do{
        printf("%i ",i);
        i++;
    }while(i <= 10);
    
    i = 10;

    do{
        printf("%i ",i);
        i--;
    }while(i >= 1);

    char op;
    do{
        fflush(stdin);
        printf("Hola");
        printf("Ingrese 's' si quiere otro saludo: ");
        scanf("%c", &op);
    }while(op == 's' || op=='S');
    
    return 0;
}