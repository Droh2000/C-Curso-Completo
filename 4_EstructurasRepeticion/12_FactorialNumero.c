#include<stdio.h>

int main(){
    int n, multi = 1;
    printf("Ingrese el numero: ");
    scanf("%i", &n);

    printf("\n!%i = ",n);
    for (int i = n; i >= 1; i--){
        if(i != 1){
            printf("%i X ",i);
        }else{
            printf("%i",i);
        }
        multi*=i;
    }
    printf(" = %i",multi);

    return 0;
}