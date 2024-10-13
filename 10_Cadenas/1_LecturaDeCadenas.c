#include<stdio.h>
#include<string.h>

int main(){
    char nombre[20];

    printf("Ingrese su nombre: ");
    //scanf("%s",nombre);// No toma Nada despues del primer espacio en blanco
    
    /* Una forma de arreglar el problema del Scan
    do{
        scanf("%s",nombre);
        // Si no es el final de lo que estamos leyendo (Para que asi sigua si hay una palabra despues de un espacio)
        if(!feof(stdin)){
            printf("\n%s",nombre);// Mostramos lo que se escribio
        }
    // Para terminar el Bucle seria con: Ctrl+Z porque esta hecho para escribir todo lo que se nos de la gana    
    } while (!feof(stdin));// Mientros no haya finalizado la cadena que esta leyendo que sigua pidiendo mas palabras
    */

   // Leer con todo y los espacios esta el Gets
   gets_s(nombre,20);


    printf("\nEl nombre es: %s", nombre);

    return 0;
}