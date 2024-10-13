/*
        Utilizar las funciones Getchar() y PutChar() para leer e imprimir un string

        getchar() -> Se utiliza para leer caracter a caracter, la llamada a getchar() devuelve el caracter
        siguiente del flujo de entrada stdin. En caso de error o de encontrar el fin de archivo, devuelve EOF
        (Macro Definida en stdio.h (End Of File))

        putchar() -> Se utiliza para escribir en la salida (stdout) caracter a cracter, el carcter que se
        escribe es el transmitido como argumento (Imprimir carcter a caracter)
*/

#include<stdio.h>

int main(){
    int c;// Este es el caracter

    // getchar() -> Lee caracter a caracter y EOF es el final de la cadena
    // Entonces meintras este leyendo y no sea el Final de la cadena siga leyendo
    while (EOF != (c=getchar())){
        putchar(c);// Imprimimos caracter a caracter
    }

    /*
        Con esto en la consola podemos escribir el texto que queramos y al precionar Enter 
        nos mostrara los caracteres que lee el bucle

        Ctrl+Z para Salir porque es un bucle infinito
    */

    return 0;
}