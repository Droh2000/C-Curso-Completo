#include<stdio.h>
#include<string.h>

int main(){
    char palabra[20];
    char palabra2[30];

    printf("Ingrese una palabra: ");
    gets_s(palabra,20);

    strcpy(palabra2,palabra);

    if(strlen(palabra2)>10){
        strcpy(palabra2+10," Buena Broma");
    }else{
        strcpy(palabra2+strlen(palabra2)," Buena Broma");
    }

    printf("Palabra: %s",palabra2);

    return 0;
}