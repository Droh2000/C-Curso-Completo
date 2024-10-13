#include<stdio.h>
#include<math.h>

int main(){

    int a, b, c;
    float media=0;

    printf("Ingrese 3 numeros: ");
    scanf("%i %i %i",&a,&b,&c);

    media = pow((a*b*c),1./3);

    printf("La media geometrica es: %.3f", media);

    return 0;
}