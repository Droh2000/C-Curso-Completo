#include<stdio.h>
#include<string.h>

int main(){
    char nom1[20], nom2[20];

    printf("Ingrese un nombre: ");
    gets_s(nom1,20);

    printf("Ingrese otro nombre: ");
    gets_s(nom2,20);

    if (strcmp(nom1,nom2)==0){
        printf("Ambos nombres son iguales");
    }else{
        printf("Los nombres son diferentes");
    }
    
    return 0;
}