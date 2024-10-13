/*
    fprintf(Puntero, Informacion);
    fwrite(Dato a guardar, Tamaño, longitud, Puntero);
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void limpiarBuffer();

FILE *fd;

struct DatosPersonales{
    char nombre[20];
    char apellidos[30];
    char email[20];
} datos;


int main(){
    char direccion[]="C:\\Ruta\\Archivo.txt";
    
    // Vamos a crear y empezar a escribir en el archivo 
    fd = fopen(direccion,"wt");

    if (fd == NULL){
        printf("Error al crear el archivo");
        return 1;
    }

    printf("\t.:AGENDA DE EMAIL:.\n");
    // Con esta funcion hacemos que el archivo contenga los texto que le mandemos
    // desde este programa (Asi puntamos este texto al archivo)
    fprintf(fd,"\t.:AGENDA DE EMAIL:.\n");

    char rpt;
    do{
        limpiarBuffer();
        printf("\n\nNombre: ");gets_s(datos.nombre,20);
        printf("\nApellidos: ");gets_s(datos.apellidos,30);
        printf("\nEmail ");gets_s(datos.email,20);

        // Mandamos el contenido al archivo de Texto y ademas guardamos el contenido de las variables en el archivo
        fprintf(fd,"\n\nNombre: ");
        // DAto a gaurdar, Cantidad, Longitud del datos, puntero
        fwrite(datos.nombre,1,strlen(datos.nombre),fd);
        fprintf(fd,"\nApellidos: ");
        fwrite(datos.apellidos,1,strlen(datos.apellidos),fd);
        fprintf(fd,"\nEmail ");
        fwrite(datos.email,1,strlen(datos.email),fd);

        printf("\nDeses Agregar mas datos (s/n): ");
        scanf("%c", &rpt);

    }while(rpt == 's');
    
    fclose(fd);
    return 0;
}

void limpiarBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}