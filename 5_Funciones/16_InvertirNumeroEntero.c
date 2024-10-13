#include<stdio.h>

int invertirNumero(int);

int main(){
    int num;
    printf("Ingrese un numero: ");
    scanf("%i", &num);

    return 0;
}

int invertirNumero(int num){
    // 12 = 21
    // 12/10 = 1
    // 12%10 = 2
    if(num>10){
        return invertirNumero(num%10);
    }else{
        return invertirNumero(num/10);
    }
}