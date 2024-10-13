#include<stdio.h>
#include<string.h>

int main(){

    char nombre[20], sexo[1];
    int edad;

    printf("Ingrese un nombre: ");
    gets_s(nombre, 20);
    printf("Ingrese la edad: ");
    scanf("%i", &edad);
    printf("Ingrese su Genero (M/F): ");
    scanf("%s",sexo);// gets_s(sexo, 1); -> Falla y termina el programa de golpe
    strlwr(sexo);

    if(edad >= 18 && strcmp(sexo,"m")==0){
        printf("Su nombre es %s, es mayor de Edad y es Hombre", nombre);
    }

    return 0;
}