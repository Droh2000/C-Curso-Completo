#include<stdio.h>
#include<stdlib.h>

FILE *fd;

int main(){
    int c;
    char direccion[]="C:\\Ruta\\Archivo.txt";

    fd = fopen(direccion,"at");// at -> Add Text -> Agregar Texto

    if (fd == NULL){
        printf("Error al crear el archivo");
        return 1;
    }

    // Agregamos mas texto al archivo
    while ((c=getchar()) != EOF){
        // Guardamos los caracteres en el archivo
        fputc(c, fd);
    }
    
    fclose(fd);
    return 0;
}