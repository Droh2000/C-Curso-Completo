#include<stdio.h>
#include<string.h>

struct Corredor{
    char nombre[25];
    int edad;
    char genero;
    char club[30];
} c1;

void limpiarBuffer();

int main(){
    char* categoria;//char categoria[20]
    printf("Ingrese los datos del corredor: \n");
    printf("Nombre: ");gets_s(c1.nombre, 25);
    printf("Edad: ");scanf("%i",&c1.edad);
    limpiarBuffer();
    // %*c -> Para que no termine de manera abrupta el llenado de datos
    printf("Genero (M/F): ");scanf("%c%*c",&c1.genero);
    printf("Club: ");gets_s(c1.club,30);

    if(c1.edad <= 18){
        categoria="Juvenil";
        // Si fuera un arreglo de char seria:
        // strcpy(categoria,"Juvenil"); -> Asi se asignan las cadenas de caracteres
    }else if(c1.edad>18 && c1.edad<=40){
        categoria="Señor";
    }else if(c1.edad > 40){
        categoria="Veterano";
    }

    printf("\nInformacion Registrada:\n");
    printf("Nombre: %s",c1.nombre);
    printf("\nEdad: %i",c1.edad);
    printf("\nGenero: %c",c1.genero);
    printf("\nClub: %s",c1.club);
    printf("\nCategoria: %s",categoria);

    return 0;
}

void limpiarBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}