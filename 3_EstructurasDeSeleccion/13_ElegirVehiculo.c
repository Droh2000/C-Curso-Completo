#include<stdio.h>

int main(){
    int op;

    printf("Selecciona el tipo de Vehiculo: ");
    printf("\n1 - Turismo");
    printf("\n2 - Autobus");
    printf("\n3- Motocicleta");
    printf("\nOpcion: ");
    scanf("%i", &op);

    switch (op){
        case 1:
            printf("El Peaje a pagar es: $500");
            break;
        case 2:
            printf("El Peaje a pagar es: $3000");
            break;
        case 3:
            printf("El Peaje a pagar es: $300");
            break;    
        default:
            printf("Vehiculo no autorizado");
            break;
    }

    return 0;
}