#include<stdio.h>

void mostrarNnumeros(int,int);

int main(){
    int num;
    printf("Ingrese la cantidad de numeros: ");
    scanf("%i", &num);

    printf("Serie de numero del %i al 1:\n",num);
    mostrarNnumeros(num,1);

    return 0;
}

void mostrarNnumeros(int n, int i){
    if(i==n){
        printf(" %i ",n);
    }else{
        mostrarNnumeros(n,i+1);
        printf(" %i ",i);
    }
}