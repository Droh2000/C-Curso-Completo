#include<stdio.h>

int main(){
    char letra = 'a';// 61h -> Valor Ascii

    do{
        printf("%c ", letra);
        letra++;
    }while (letra != 'z');
    
    return 0;
}