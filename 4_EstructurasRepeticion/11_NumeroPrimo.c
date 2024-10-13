#include<stdio.h>

int main(){
    int n, cont = 0;

    printf("Ingrese el numero: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++){
        if(n%i == 0 ){
            cont++;
        }
    }

    if (cont >= 3 || n == 0 || n == 1){
        printf("El numero no es primo");
    }else{
        printf("El numero %i es primo", n);
    }
    
    return 0;
}