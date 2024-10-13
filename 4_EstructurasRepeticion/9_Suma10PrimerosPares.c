#include<stdio.h>

int main(){
    int suma = 0;

    /*for (int i = 1; i <= 10; i++){
        if(i % 2 == 0){
            suma+=i;
        }
    }*/
    for (int i = 0; i <= 10; i+=2){
        suma+=i;
    }
    printf("La suma es: %i", suma);

    return 0;
}