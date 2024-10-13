#include<stdio.h>

int main(){
    int c, cont=0;

    printf("Digite una frase y luego pulse Ctrl+Z para terminar: \n");
    while (EOF != (c=getchar())){
        // getchar lee caracter a caracter 
        switch (c){// Ponemos la c ya que nos importa los caracteres individuales
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cont++;
            break;
        }
    }

    printf("La frase tiene %i vocales",cont);

    return 0;
}