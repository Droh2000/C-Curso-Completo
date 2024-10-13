#include<stdio.h>
#include<string.h>

int main(){
    int n, contM=0, contH=0;
    char alumnos[30];

    printf("Ingrese el total de alumnos: ");
    scanf("%i",&n);

    printf("Ingrese el Genero (M/F):\n");
    for (int i = 0; i < n; i++){
        printf("%i. Alumno: ",i+1);
        scanf("%c", &alumnos[i]);

        if(alumnos[i]=='F'){
            contM++;
        }else if(alumnos[i]=='M'){
            contH++;
        }else{
            printf("Género inválido. Ingrese M o F.\n");
            i--; // Repetir la iteración para este alumno
        }
    }
    
    printf("\nCantidad de personas por Genero:\n");
    printf("Hombres: %i",contH);
    printf("\nMujeres: %i",contM);

    return 0;
}