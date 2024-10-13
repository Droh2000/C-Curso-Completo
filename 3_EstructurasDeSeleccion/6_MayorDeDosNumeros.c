#include<stdio.h>

int main(){
    int n1, n2;

    printf("Ingrese dos numeros: ");
    scanf("%i %i", &n1, &n2);

    if(n1 == n2){
        printf("El numero %i es igual al numero %i", n1, n2);
    }else if(n1 > n2){
        printf("El numero mayor es %i", n1);
    }else{
        printf("El numero mayor es %i", n2);
    }

    return 0;
}