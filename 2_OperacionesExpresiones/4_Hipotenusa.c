#include<stdio.h>
#include<math.h>

int main(){

    float cat1, cat2, hip=0;

    printf("Ingrese el valor de los Catetos: ");
    scanf("%f %f",&cat1, &cat2);

    hip = sqrt(pow(cat1,2) + pow(cat2, 2));

    printf("\nLa hipotenusa del triangulo rectangulo es: %.3f", hip);

    return 0;
}