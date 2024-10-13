#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Atleta{
    char nombre[25];
    char pais[25];
    int numMedallas;
} *atl;

void limpiarBuffer();

int main(){
    int n, pos=0, ganador;
    printf("Ingrese la cantidad de atletas que quiere registrar: ");
    scanf("%i", &n);

    atl = (struct Atleta *)malloc(n * sizeof(struct Atleta));

    printf("\nRegistre la informacion de los atletas:\n");
    for (int i = 0; i < n; i++){
        limpiarBuffer();
        printf("%i. Nombre: ",i+1);
        gets_s(atl[i].nombre,25);
        printf("%i. Pais: ",i+1);
        gets_s(atl[i].pais,25);
        printf("%i. Numero de Medallas: ",i+1);
        scanf("%i",&atl[i].numMedallas);

        if(i==0){
            ganador=atl[i].numMedallas;
            pos=i;
        }else{
            if(atl[i].numMedallas > ganador){
                ganador=atl[i].numMedallas;
                pos=i;
            }
        }
        
        printf("\n");
    }
    
    printf("\nAtleta con Mayor numero de Medallas:");
    printf("\nNombre: %s",atl[pos].nombre);
    printf("\nPais: %s",atl[pos].pais);
    printf("\nNumero de Medallas: %i",atl[pos].numMedallas);

    free(atl);
    return 0;
}

void limpiarBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}