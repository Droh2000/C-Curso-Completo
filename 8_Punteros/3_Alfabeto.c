#include<stdio.h>

int main(){
    char letra;
    char* pLetra = &letra;// Lo posicionamos en la letra

    for (letra = 'A'; letra <= 'Z'; letra++){
        // pLetra esta apuntando en la posicion de memoria de "letra"
        // Entonces imprime todo lo que encuentre en la posicion de memoria
        // donde esta señalando que seria "Letra" asi imprime todas las letras porque
        // se va incrementando
        printf("%c ",*pLetra);
    }
    
    return 0;
}