#include<stdio.h>
#include<string.h>

struct Alumno{
    char nombre[25];
    int edad;
    float promedio;

} a[3];

void limpiarBuffer();

int main(){
    int pos=0;
    printf("Ingrese los datos del Alumno:\n");
    for (int i = 0; i < 3; i++){
        printf("%i. Nombre: ",i+1);gets_s(a[i].nombre,25);
        printf("%i. Edad: ",i+1);scanf("%i",&a[i].edad);
        printf("%i. Promedio: ",i+1);scanf("%f",&a[i].promedio);
        limpiarBuffer();
        if(i>=1){
            if(a[i].promedio > a[i-1].promedio){
                pos=i;
            }
        }
    }

    printf("\nEl alumno con el mejor promedio es:\n");

    printf("\nNombre: %s",a[pos].nombre);
    printf("\nEdad: %i",a[pos].edad);
    printf("\nPromedio: %.2f",a[pos].promedio);

    return 0;
}

void limpiarBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}