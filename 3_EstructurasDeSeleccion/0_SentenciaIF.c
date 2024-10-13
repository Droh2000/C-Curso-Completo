/*
    Setencia:
        if(condicion)
            Accion
*/
#include<stdio.h>

int main(){
    int n1, n2;

    printf("Ingrese dos numeros: ");
    scanf("%i %i",&n1,&n2);

    // Detectar si el primer numero es divisible por el segundo
    if(n1 % n2 == 0){
        printf("El numero %i es divisible entre %i",n1,n2);
    }

    return 0;
}
