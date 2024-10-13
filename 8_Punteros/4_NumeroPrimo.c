#include<stdio.h>

int main(){
    int num, cont=0;
    printf("Ingrese un numero: ");
    scanf("%i", &num);
    int* punteroNum = &num;

    for (int i = 1; i < *punteroNum; i++){
        if(*punteroNum % 2 == 0){
            cont++;
        }
    }

    if(cont>2 || *punteroNum==0 || *punteroNum==1){
        printf("\nEl numero %i no es primo",*punteroNum);
    }else{
        printf("\nEl numero %i es primo",*punteroNum);
    }

    printf("\nLa posicion de memoria es: %p",punteroNum);
    
    return 0;
}