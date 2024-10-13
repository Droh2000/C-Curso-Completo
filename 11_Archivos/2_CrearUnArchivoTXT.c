#include<stdio.h>
#include<stdlib.h>

//Puntero archivo
FILE *fd;

int main(){
    char direccion[]="C:\\Ruta\\archivo.txt";

    fd = fopen(direccion,"w");// w de Write o Escribir --> Para crear un archivo desde cero

    if(fd == NULL){
        printf("Ruta incorrecta y no se puede crear el archivo");
    }else{
        printf("Se creo el archivo");
        printf("\nUbicacion: %s",direccion);
    }

    return 0;
}