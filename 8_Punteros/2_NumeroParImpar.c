#include<stdio.h>

int main(){
    int num,*punteroNum;

    printf("Ingrese un numero: ");
    scanf("%i",&num);

    punteroNum=&num;

    //printf("Ingrese un numero: ");
    //scanf("%i",&punteroNum);

    if(*punteroNum % 2 == 0){
        printf("\nEl numero %i es par",*punteroNum);
        printf("\nEsta en la posicion de memoria de %p",punteroNum);
    }else{
        printf("\nEl numero %i es impar",*punteroNum);
        printf("\nEsta en la posicion de memoria de %p",punteroNum);
    }

    return 0;
}