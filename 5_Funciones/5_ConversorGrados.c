#include<stdio.h>

void pedirDatos();
float fahrenheit(float);
float kelvin(float);

int main(){
    pedirDatos();
    return 0;
}

void pedirDatos(){
    int opt;
    float c;
    do{
        printf("\t\nMenu\nConverso de Gardos Celsius:");
        printf("\n1.Fahrenheit");
        printf("\n2.Kelvins");
        printf("\n3.Salir");
        printf("\n3.Opcion: ");
        scanf("%i",&opt);

        switch (opt){
        case 1:
            printf("Ingrese los gardos Celsius: ");
            scanf("%f",&c);
            printf("Los grados Fahrenheit es: %.2f",fahrenheit(c));
            break;
        case 2:
            printf("Ingrese los gardos Celsius: ");
            scanf("%f",&c);
            printf("Los grados Kelvins es: %.2f",kelvin(c));
            break;
        case 3:
            printf("\nAdios!!!!");    
            break;    
        default:
            printf("\nOpcion incorrecta");
            break;
        }
    }while (opt != 3);
    
}

float fahrenheit(float c){
    return (9*c)/5 + 32;
}

float kelvin(float c){
    return c + 273.15;
}