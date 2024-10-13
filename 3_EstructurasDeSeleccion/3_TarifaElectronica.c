#include<stdio.h>

// Uso de macros para poner las tarifas
#define TARIFA1 1.2
#define TARIFA2 1.0
#define TARIFA3 0.9

int main(){
    float gasto, tasa;

    printf("Ingrese la cantidad gastado en Luz: ");
    scanf("%f", &gasto);

    if(gasto < 1000){
        tasa = TARIFA1;
    }
    if (gasto >= 1000 && gasto<=1850){
        tasa = TARIFA2;
    }
    if (gasto > 1850){
        tasa = TARIFA3;
    }

    printf("El gasto de la tarifa es de %.1f", tasa);

    return 0;
}