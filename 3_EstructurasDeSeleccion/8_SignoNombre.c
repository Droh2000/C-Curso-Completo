#include<stdio.h>
#include<string.h>

int main(){
    char nombre[20], signo[20];

    printf("Ingrese su nombre: ");
    gets_s(nombre,20);

    printf("Ingrese su signo de Horoscopo: ");
    gets_s(signo,20);

    if(strcmp(signo,"aries") == 0){// ==1 quiere decir diferente
        printf("Su nombre es %s y su signo es %s", nombre, signo);
    }else{
        printf("Usted no es signo Aries");
    }

    return 0;
}