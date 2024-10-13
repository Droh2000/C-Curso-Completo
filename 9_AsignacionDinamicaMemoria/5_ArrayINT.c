#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int n, *arr;
    printf("Ingrese la cantidad de elementos en el array: ");
    scanf("%i",&n);

    arr = (int *)malloc(n * sizeof(int));

    if(arr == NULL){
        printf("No se pudo asignar la memoria al array");
    }else{
        srand(time(NULL));
        for (int i = 0; i < n; i++){
            *(arr+i)=1 + rand() % ((100+1)-1);
            printf("%i, ", *(arr+i));
        }
    }

    return 0;
}