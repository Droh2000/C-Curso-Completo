/*
    Una cadena es un tipo de dato compuesto, un array de caracteres (char), terminando por el
    caracter ('\0')
        cad = "ABC" -> Se almcena en posiciones continuas de memoria cada letra y esta:
            [A][B][C][\0] -> Por lo tanto podemos decir que tiene 4 espacios
            
            Acceder a sus posiciones:
                printf("%c", cad[0]); -> A
                printf("%c", cad[1]); -> B
                printf("%c", cad[2]); -> C
                printf("%c", cad[3]); -> \0

            Usando Punteros:
                printf("%c", *cad); -> A
                printf("%c", *(cad+1)); -> B
                printf("%c", *(cad+2)); -> C
                printf("%c", *(cad+3)); -> \0
*/
#include<stdio.h>

int main(){
    char cad[] = "ABC";

    printf("%c", cad[0]);
    printf("%c", cad[1]);
    printf("%c", cad[2]);
    printf("%c", cad[3]);// El final de cadena no se muestra en la consola pero siempre esta

    printf("\nUsando Puntero:\n");
    printf("%c", *cad);
    printf("%c", *(cad+1));
    printf("%c", *(cad+2));
    printf("%c", *(cad+3));    

    return 0;
}