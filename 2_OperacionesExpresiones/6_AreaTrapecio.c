#include<stdio.h>

int main(){
    int baseMay, baseMen, altura, area=0;

    printf("Ingrese la base mayor: ");
    scanf("%i", &baseMay);
    printf("Ingrese la base menor: ");
    scanf("%i", &baseMen);
    printf("Ingrese la altura: ");
    scanf("%i", &altura);

    area = ((baseMay+baseMen)/2)*altura;

    printf("\nEl area del Trapecio es: %i", area);

    return 0;
}