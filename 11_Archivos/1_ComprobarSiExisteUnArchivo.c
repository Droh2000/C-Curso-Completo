/*
    Utilizar la funcion fopen(), para determinar si existe un archivo de texto (.txt) o no

    fopen(nombre de archivo, modo);

        nombre de archivo = Cadena -> Contiene el identificador externo del archivo (La ubicacionn del archivo)
        modo = Cadena -> Contiene el modo en que va a ser tratado el archivo
*/
#include<stdio.h>
#include<stdlib.h>// Para la funcion NULL

// Puntero Archivo 
FILE *fd;// Con este determinamos si el archivo existe o no

int main(){
    // Ponemos la ubicacion del archivo
    char direccion[]="C:\\Ruta\\archivo.txt";

    // Le mandamos la funcion al puntero
    // Leemos el archivo para determinar si existe o no: r -> read -> leer
    fd = fopen(direccion, "r");

    if (fd == NULL){// Si el puneto apunta a NULL
        printf("El archivo o la direccion no existe");
    }else{
        printf("Se encontro el archivo: ");
        printf("\nUbicacion:\n %s",direccion);
    }

    return 0;
}