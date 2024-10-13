#include<stdio.h>
#include<stdlib.h>

FILE *fd;

int main(){
    int c;
    char direccion[]="C:\\Ruta\\Archivo.txt";

    // Ahora queremos leer un archivo (r es para comprobar si existe y t para texto)
    fd = fopen(direccion, "rt");// rt = read text -> Leer texto

    if (fd == NULL){
        printf("Error al crear el archivo");
        return 1;
    }

    // Funcion para leer el archivo con FGETC(puntero)
    // Asi leemos caracter a caracter
    while ((c=fgetc(fd)) != EOF){
        // Tenemos que detectar los saltos de linea
        if(c=='\n'){
            //Solo lo imprimimos
            printf("\n");
        }else{
            // Imprimir Todos el resto del contenido del archivo
            putchar(c);
        }
    }
    
    fclose(fd);
    return 0;
}