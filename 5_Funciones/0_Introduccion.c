/*
    Funciones:

        Funciones sin retorno de valor (Este se le llama Procedimiento)

            void nombreFuncion( parmetros){
                Instrucciones...
            }
        
        Funciones con retorno de valor

            tipoDato nombreFuncion( parametros ){
                Intrucciones...
                return valor;
            }
*/

#include<stdio.h>

// Prototipo de funcion (Para que C sepa que existe la funcion y no pierda tiempo buscandola porque en verdad Existe)
void saludo();// Si no ponemos prototipo tendra que estar definida la funcion arriba
int sumar(int,int);

int main(){
    saludo();

    int a, b, suma=0;

    printf("Ingrese dos numeros: ");
    scanf("%i %i", &a, &b);

    printf("La suma es: %i", sumar(a,b));

    return 0;
}

void saludo(){
    printf("\nHola No se que decir\n");
}

int sumar(int a,int b){
    return a+b;
}