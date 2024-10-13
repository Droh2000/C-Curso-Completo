/*
        Condicional con el operador ?
        Sintaxis:

            Condicional ? Expreccion1 (TRUE) : Exprecion2 (FALSE)

*/

#include<stdio.h>

int main(){
    int num;
    printf("Ingrese un numero: ");
    scanf("%i", &num);

    (num % 2 == 0) ? puts("Numero Par") : puts("Numero Impar");

    return 0;
}