#include<stdio.h>
#include<math.h>

int main(){

    int op, num;

    printf("\tMenu:\n");
    printf("\n1. Cubo de un numero");
    printf("\n2. Numero Par o Impar");
    printf("\n3. Salir");
    printf("\nOpcion: ");
    scanf("%i", &op);

    switch (op){
    case 1:
        printf("Ingrese un numero: ");
        scanf("%i", &num);
        printf("El cubo del numero es: %i", pow(num,3));
        break;
    case 2:
        printf("Ingrese un numero: ");
        scanf("%i", &num);
        if(num % 2 == 0){
            printf("El numero %i es Par", num);
        }else{
            printf("El numero %i es Impar", num);
        }
        break;
    case 3:
        printf("Adios!!!!!"); 
        break;    
    default:
        printf("Se equivoco de opcion");
        break;
    }

    return 0;
}