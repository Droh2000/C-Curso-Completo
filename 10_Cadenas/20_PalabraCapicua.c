#include<stdio.h>
#include<string.h>

int main(){
    char cad1[]="reconocer";
    char cad2[30];

    strcpy(cad2,cad1);

    strrev(cad2);

    if (strcmp(cad1,cad2)==0){
        printf("Es una palabra capicua o polindroma");
    }else{
        printf("No es Capicua o polindroma");
    }
    
    return 0;
}