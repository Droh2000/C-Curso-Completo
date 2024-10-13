#include<stdio.h>

void ordenarDecendentemente(int,int,int);

int main(){
    int n1,n2,n3;

    printf("Ingrese tres numeros: ");
    scanf("%i %i %i",&n1,&n2,&n3);

    ordenarDecendentemente(n1,n2,n3);

    return 0;
}

void ordenarDecendentementee(int n1,int n2,int n3){
    printf("Orden de los numeros: \n");
    if(n1 >= n2 && n1 >=n3){
        if(n2 >= n3){
            printf("%i %i %i",n1,n2,n3);
        }else{
            printf("%i %i %i",n1,n3,n2);
        }
    }
    if(n2 >= n1 && n2 >=n3){
        if(n1 >= n3){
            printf("%i %i %i",n2,n1,n3);
        }else{
            printf("%i %i %i",n2,n3,n1);
        }
    }
    if(n3 >= n1 && n3 >=n2){
        if(n1 >= n2){
            printf("%i %i %i",n3,n1,n2);
        }else{
            printf("%i %i %i",n3,n2,n1);
        }
    }
}