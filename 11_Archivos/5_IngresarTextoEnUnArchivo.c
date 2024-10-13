/*
    Se utiliza la funcion "fputc()" para introducir caracteres en un archivo de texto
    (.txt)

        fput(c, puntero_archivo);
            c -> Son los caracteres que queremos incluir

*/
#include<stdio.h>
#include<stdlib.h>

FILE *fd;

int main(){
    int c;// Caracter que vamos a ir incluyendo al archivo
    char direccion[]="C:\\Ruta\\Archivo.txt";

    // Como ahora queremos crear y escribir texto en el entonces ponemos el siguiente modo
    fd = fopen(direccion, "wt");// wt -> Write Text

    if (fd == NULL){
        printf("Error al crear el archivo");
        return 1;
    }

    // Agregar Texto al archivo
    // Pediremos caracteres al usuario con "getchar()" hasta que el quiera (Ctrl+Z para salir)
    while ((c=getchar()) != EOF){
        //Guardamos los caracteres introducidos
        fputc(c, fd);
    }
    
    fclose(fd);

    return 0;
}