#include<stdio.h>

int main(){
    int a,b,c;
    a = b = c = 10;

    printf("El valor de a,b,c es: %i %i %i",a,b,c);

    a = 10;
    a += 10;// a = a + 10
    a -= 5;
    a *= 2;
    a /=2;
    printf("El valor de a es: %i",a);

    return 0;
}