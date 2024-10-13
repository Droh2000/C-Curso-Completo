#include<stdio.h>
#include <stdbool.h>// Para manejar los valores booleanos

bool esPar(int);

int main(){
    int num;

    printf("Ingrese un numero: ");
    scanf("%i", &num);

    if (esPar(num)){
        printf("El numero es Par");    
    }else{
        printf("El numero es Impar");
    }
    
    return 0;
}

bool esPar(int n){
    return (n%2==0)?true:false;
}