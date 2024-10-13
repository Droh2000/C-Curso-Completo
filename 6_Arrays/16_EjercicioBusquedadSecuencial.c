#include<stdio.h>

int main(){

    int a[10]={5,8,7,9,6,2,20,1,3,50};
    int dato, i=0;
    char band = 'F';

    printf("Ingrese el elemento a buscar en el arreglo: ");
    scanf("%i",&dato);

    while (band=='F' && i<10){
        if(a[i]==dato){
            band='V';
        }
        i++;
    }
    
    if (band=='F'){
        printf("El elemento %i no exite en el arreglo",dato);
    }else{
        printf("El elemento %i exite en el arreglo en la posicion %i",dato,i-1);
    }
    


    return 0;
}