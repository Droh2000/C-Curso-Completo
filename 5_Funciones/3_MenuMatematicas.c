#include<stdio.h>

int opc, num1, num2;

void pedirDatos();
int sumar(int, int);
int restar(int, int);
int multiplicar(int, int);
float dividir(int, int);

int main(){

    do{
        pedirDatos();
    } while (opc != 5);
    

    return 0;
}

void pedirDatos(){
    printf("\n\tMenu:");
    printf("\n1. Sumar");
    printf("\n2. Resta");
    printf("\n3. Multiplicacion");
    printf("\n4. Dividir");
    printf("\n5. Salir");
    printf("\nOpcion: ");
    scanf("%i", &opc);

    switch (opc){
    case 1:
        printf("Ingrese dos numeros: ");
        scanf("%i %i", &num1, &num2);
        printf("La suma es: %i",sumar(num1,num2));
        break;
    case 2:
        printf("Ingrese dos numeros: ");
        scanf("%i %i", &num1, &num2);
        printf("La resta es: %i",restar(num1,num2));
        break;
    case 3:
        printf("Ingrese dos numeros: ");
        scanf("%i %i", &num1, &num2);
        printf("La multiplicacion es: %i",multiplicar(num1,num2));
        break;
    case 4:
        printf("Ingrese dos numeros: ");
        scanf("%i %i", &num1, &num2);
        if(dividir(num1,num2) != -1){
            printf("La divicion es: %.2f",dividir(num1,num2));
        }else{
            printf("Divicion de 0");
        }
        break;
    case 5:
        printf("Adios!!!!!");
        break;
    default:
        printf("Se equivo de opcion");
    }
}

int sumar(int n1, int n2){
    return n1 + n2;
}
int restar(int n1, int n2){
    return n1-n2;
}
int multiplicar(int n1, int n2){
    return n1*n2;
}
float dividir(int n1, int n2){
    if(n2 != 0){
        return n1/n2;
    }else{
        return -1;
    }
}