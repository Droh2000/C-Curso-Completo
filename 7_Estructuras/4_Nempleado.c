#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Empleado{
    char nombre[25];
    int edad;
    float salario;
} *emp;

void limpiarBuffer();

int main(){
    int n, posMenor, posMayor;
    float menorSalario, mayorSalario;
    printf("Ingrese la cantidad de empleados que quiere registrar: ");
    scanf("%i", &n);

    emp = (struct Empleado *)malloc(n * sizeof(struct Empleado));

    printf("\nRegistre la informacion de los empleados:\n");
    for (int i = 0; i < n; i++){
        limpiarBuffer();
        printf("%i. Nombre: ",i+1);
        gets_s(emp[i].nombre,25);
        printf("%i. Edad: ",i+1);
        scanf("%i",&emp[i].edad);
        printf("%i. Salario: ",i+1);
        scanf("%f",&emp[i].salario);
        if(i==0){
            menorSalario=emp[i].salario;
            mayorSalario=emp[i].salario;
            posMenor=i;
            posMayor=i;
        }else{
            if(emp[i].salario>mayorSalario){
                mayorSalario=emp[i].salario;
                posMayor=i;
            }
            if(emp[i].salario<menorSalario){
                menorSalario=emp[i].salario;
                posMenor=i;
            }
        }
        printf("\n");
    }
    
    printf("\nEmpleado con Mayor Salario:");
    printf("\nNombre: %s",emp[posMayor].nombre);
    printf("\nEdad: %i",emp[posMayor].edad);
    printf("\nSalario: %.2f",emp[posMayor].salario);

    printf("\n\nEmpleado con Menor Salario:");
    printf("\nNombre: %s",emp[posMenor].nombre);
    printf("\nEdad: %i",emp[posMenor].edad);
    printf("\nSalario: %.2f",emp[posMenor].salario);

    free(emp);
    return 0;
}

void limpiarBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}