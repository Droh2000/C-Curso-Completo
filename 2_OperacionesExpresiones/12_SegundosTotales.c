#include<stdio.h>

int main(){
    int hr, min, seg, segTot=0;

    printf("Ingrese la cantidad de Horas: ");
    scanf("%i", &hr);

    printf("Ingrese la cantidad de Min: ");
    scanf("%i", &min);

    printf("Ingrese la cantidad de Segundos: ");
    scanf("%i", &seg);

    hr*=3600;
    min*=60;
    segTot=hr+min+seg;

    printf("La cantidad de segundos totales es: %i", segTot);

    return 0;
}