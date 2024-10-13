#include<stdio.h>

int main(){
    int op;
    float saldoTot = 1000, dinero=0;

    printf("\tCajeor Automatico\nIngrese la Opcion correspondiente\n\n");
    printf("1. Ingresar Dinero");
    printf("\n2. Retirar Dinero");
    printf("\n3. Consultar Saldo");
    printf("\nOpcion: ");
    scanf("%i", &op);

    switch (op){
    case 1:
        printf("Ingrese la cantidad de dinero: ");    
        scanf("%f", &dinero);
        saldoTot+=dinero;
        break;
    case 2:
        printf("Ingrese la cantidad de dinero a retirar: ");    
        scanf("%f", &dinero);
        if(dinero > saldoTot){
            printf("El dinero supera el saldo disponible");
        }else{
            saldoTot-=dinero;
        }
        break;
    case 3:
        print("Su saldo es %.3f", saldoTot);
        break;    
    default:
        printf("Opcion Incorrecta");
        break;
    }

    return 0;
}