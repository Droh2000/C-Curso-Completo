#include<stdio.h>

void pedirDatos();
void tablaNumero(int);

int main(){
    pedirDatos();
    return 0;
}

void pedirDatos(){
    int num;
    printf("Ingrese un numero: ");
    scanf("%i", &num);
    tablaNumero(num);
}
void tablaNumero(int n){
    printf("Tabla de multiplicar del %i\n",n);
    for (int i = 0; i <= 20; i++){
        printf("%i X %i = %i",n,i,(n*i));
        printf("\n");
    }
}