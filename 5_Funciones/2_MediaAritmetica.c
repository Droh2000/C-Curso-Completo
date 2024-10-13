#include<stdio.h>

float getMedia(int, int);

int main(){
    int num1, num2;
    printf("Ingrese dos numeros: ");
    scanf("%i %i",num1, num2);

    printf("La media es: %.3f",getMedia(num1, num2));

    return 0;
}

float getMedia(int n1, int n2){
    return (n1+n2)/2;
}