// Estructura Dentro de otra Estrucutra
#include<stdio.h>
#include<string.h>

struct InfoDireccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct Empleado{
    char nombre[20];
    struct InfoDireccion dirEmpleado;
    double salario;
} emp[2];

void limpiarBuffer();

int main(){

    printf("Ingrese la informacion del empleado:\n");
    for (int i = 0; i < 2; i++){
        limpiarBuffer();
        printf("%i. Nombre: ",i+1);
        gets_s(emp[i].nombre,30);
        printf("%i. Direccion: ",i+1);
        gets_s(emp[i].dirEmpleado.direccion,20);
        printf("%i. Ciudad: ",i+1);
        gets_s(emp[i].dirEmpleado.ciudad,20);
        printf("%i. Provincia: ",i+1);
        gets_s(emp[i].dirEmpleado.provincia,20);
        printf("%i. Salario: ",i+1);
        scanf("%lf",&emp[i].salario);
        printf("\n");
    }
    
    printf("\nDatos Registrados:\n");
    for (int i = 0; i < 2; i++){
        printf("%i. Nombre: %s",i+1,emp[i].nombre);
        printf("\n%i. Direccion: %s",i+1,emp[i].dirEmpleado.direccion);
        printf("\n%i. Ciudad: %s",i+1,emp[i].dirEmpleado.ciudad);
        printf("\n%i. Provincia: %s",i+1,emp[i].dirEmpleado.provincia);
        printf("\n%i. Salario: %.2lf",i+1,emp[i].salario);
        printf("\n\n");
    }
    
    return 0;
}

void limpiarBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}