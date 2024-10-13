#include<stdio.h>

int main(){
    float incremento, pago, salarioFinal=0;

    printf("Ingrese el pago actual del obrero: ");
    scanf("%f", &pago);

    incremento = (pago*0.25f);
    salarioFinal= incremento+pago;

    printf("El salario con incremento de 25%% es: $%.3f",salarioFinal);

    return 0;
}