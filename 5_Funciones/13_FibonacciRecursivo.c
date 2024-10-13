#include<stdio.h>

int fibonacci(int);

int main(){
    int num;
    printf("Ingrese la cantidad de numeros: ");
    scanf("%i", &num);

    printf("Serie de Fibonacci: \n");
    for (int i = 1; i <= num; i++){
        printf("%i ", fibonacci(i));
    }
    
    return 0;
}

/*
    0 1 1 2 3 5 8 13

    Caso base:
        Va a ser 0 o 1
            fibonacci(1) = 1
            fibonacci(0) = 0
    Recursivo
        Suma de los dos numeros anteriores
            fibonacci(n) = fibonacci(n-1)+fibonacci(n-2)
*/
int fibonacci(int num){
    if(num==0 || num==1){
        return num;
    }else{
        return (fibonacci(num-1)+fibonacci(num-2));
    }
}