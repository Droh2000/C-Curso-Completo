#include<stdio.h>
#include<string.h>

int main(){
    char cad1[]="hola";
    char cad2[]="hola";

    strupr(cad1);
    strupr(cad2);

    if (strcmp(cad1,cad2)==0){
        printf("Ambas cadenas son iguales\n");
        printf("%s",cad1);
        printf("\n%s",cad2);
    }else{
        printf("Son diferentes");
    }
    
    return 0;
}