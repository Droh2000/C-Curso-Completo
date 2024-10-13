#include<stdio.h>
#include<stdlib.h> // Libreria para acceder al metodo de limpiar pantalla

int main(){
    
    char tecla;

    printf("Programa de Borrado de Pantalla!!!!!!!!!");
    printf("\n--------------------------------------");
    printf("\n--------------------------------------");
    printf("\n--------------------------------------");
    printf("\nDigite el numero 1: ");
    scanf("%c", &tecla);
    fflush(stdin); // PARA CUANDO SE LLENE EL BUFFER Y SE JUNTE TODO EN PANTALLA5

    if (tecla == '1'){
        system("cls");
        printf("Ha funcionado el Limpiado de pantalla");
    }else{
        printf("No ha funcionado el Limpiado de pantalla");
        printf("\nPorfavor digite el numero 1: ");
        scanf("%c", &tecla);
        
        if(tecla == '1'){
            system("cls");
            printf("Ha funcionado el Limpiado de pantalla");
        }else{
            printf("No funciono!!!!!");
        }

    }
    
    return 0;
}