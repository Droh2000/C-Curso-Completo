#include<stdio.h>

void pedirDatos();
void numeroEnLetras(int);

int main(){
    pedirDatos();
    return 0;
}

void pedirDatos(){
    int num;

    do{
        printf("Ingrese un numero entre 1-10: ");
        scanf("%i", &num);
    } while (num<=0 || num>10);

    numeroEnLetras(num); 
}

void numeroEnLetras(int n){
    switch (n){
        case 1:
            printf("Uno");
            break;
        case 2:
            printf("Dos");
            break;        
        case 3:
            printf("Tres");
            break;
        case 4:
            printf("Cuatro");
            break;
        case 5:
            printf("Cinco");
            break;
        case 6:
            printf("Seis");
            break;
        case 7:
            printf("Siete");
            break;
        case 8:
            printf("Ocho");
            break;
        case 9:
            printf("Nueve");
            break; 
        case 10:
            printf("Diez");
            break;
    }
}