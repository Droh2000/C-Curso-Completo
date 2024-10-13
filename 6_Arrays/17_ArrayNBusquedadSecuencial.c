#include<stdio.h>
#include<stdlib.h>

int main(){
    int num, dato, i=0, *a;
    char band='F';
    printf("Ingrese el numero de elementos en el array: ");
    scanf("%i",&num);

    a=(int *)malloc(num * sizeof(int));

    printf("Ingrese los datos del arreglo: \n");
    for (int i = 0; i < num; i++){
        printf("%i.: ",i+1);
        scanf("%i",&*(a+i));// Pasar datos en modo apuntador
    }

    printf("Ingrese un elemento a buscar: ");
    scanf("%i",&dato);

    while (band=='F' && i<num){
        if (*(a+i)==dato){
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