#include<stdio.h>

int main(){
    int c, espacios=0;

    while (EOF != (c=getchar())){
        //putchar(c); -> Si se deja se repite las palabras
        if(putchar(c)==' '){
            espacios++;
        }
    }

    printf("\nCantidad de Espacios: %i \n",espacios);

    return 0;
}