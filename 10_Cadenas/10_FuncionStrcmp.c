// Funcion para comparar cadenas
#include<stdio.h>
#include<string.h>

int main(){
    char cad1[]="Hola";
    char cad2[]="hola";

    // Con == 0 Es para saber si son iguales
    // Con == 1 Es para saber si son diferentes
    if(strcmp(cad1,cad2)==0){
        printf("Las Cadenas, %s y %s son iguales",cad1,cad2);
    }else{
        printf("Las Cadenas, %s y %s son diferentes",cad1,cad2);
    }
    
    return 0;
}