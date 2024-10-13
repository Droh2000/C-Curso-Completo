#include<stdio.h>
#include<string.h>

int main(){
    char cad1[20],cad2[20];

    printf("Ingrese la primera palabra: ");
    gets_s(cad1,20);
    
    printf("Ingrese la segunda palabra: ");
    gets_s(cad2,20);

    // Con mayor a cero significa que si la cad1 es mayor a cad2 alfabeticamente
    // lo que significa que cad1 va despues 
    if (strcmp(cad1,cad2)>0){
        printf("%s, %s",cad2,cad1);
    }else{
        printf("%s, %s",cad1,cad2);
    }

    return 0;
}