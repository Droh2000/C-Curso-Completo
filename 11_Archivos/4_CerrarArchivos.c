#include<stdio.h>
#include<stdlib.h>

// Punteros de archivos, ahora vamos a abrir dos
FILE *fd1,*fd2;

int main(){
    // Vamos a agregar mas contenido del que ya tenemos que es con el modo a+
    fd1 = fopen("C:\\Rute\\Archivo1.txt","a+");
    fd2 = fopen("C:\\Rute\\Archivo2.txt","a+");

    if (fd1 == NULL || fd2 ==NULL){
        printf("No se pudo acceder a los archivos");
    }else{
        printf("Si se pudieron comprobar los archivos");
    }

    // Cerrar los archivos con esta funcion
    // Liberamos la memoria del buffer y evitamos dañar los archivos
    fclose(fd1);
    fclose(fd2);

    return 0;
}