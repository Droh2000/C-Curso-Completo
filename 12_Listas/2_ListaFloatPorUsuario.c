#include<stdio.h>
#include<stdlib.h>

typedef struct {
    float numero;
    struct Nodo *siguiente;
} Nodo;

Nodo *primer = NULL;
Nodo *ultimo = NULL;

void agregar(Nodo* nodo){
    // Inicializamos el nuevo nodo
    nodo -> siguiente = NULL;// Como este nuevo tendra que apuntar a siguiente por el momento lo definimos como NULL

    if(primer == NULL){
        primer = nodo;
        ultimo = nodo;
    }else{
        ultimo -> siguiente = nodo;// A donde apuntaba ultimo hacemos que apunte al nuevo y este sera el ultimo
        ultimo = nodo;
    }
}

int main(){
    float n1,n2,n3;

    printf("Ingrese tres numeros flotantes: ");
    scanf("%f %f %f",&n1,&n2,&n3);

    // Creamos los nodos
    Nodo *primerNodo = malloc(sizeof(Nodo));
    primerNodo->numero = n1;

    Nodo *segundoNodo = malloc(sizeof(Nodo));
    segundoNodo->numero = n2;

    Nodo *tercerNodo = malloc(sizeof(Nodo));
    tercerNodo->numero = n3;

    agregar(primerNodo);
    agregar(segundoNodo);
    agregar(tercerNodo);

    // Mostrar la lista
    Nodo *i = primerNodo;
    while (i != NULL){
        printf("%.2f ",i->numero);
        i = i -> siguiente;
    }
    
    return 0;
}