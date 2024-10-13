#include<stdio.h>

void binario(int);

int main(){
    int num;
    do{
        printf("Ingrese un numero positivo: ");
        scanf("%i", &num);
    }while(num<0);
    
    binario(num);

    return 0;
}

/*
    Para convertir en binario
        Haciendo diviciones sucesivas entre dos
        y solo podemos dividir entre dos cuando el numero
        es de dos hacia arriba (n>1) entonces podemos dividir entre dos

*/
void binario(int n){
    // El Caso base es dividir entre dos y luego nos debe entregar el residuo correspondiente
    if(n>1) binario(n/2);

    // Caso contrario
    // Queremos imprimeir el resto de la divicion
    printf("%i", n%2);
}