#include<stdio.h>
#include<stdlib.h>// Para poder usar NULL

// Creamos un Nodo
typedef struct{
    // Aqui tenemos el dato y el puntero
    int dato;
    // Puntero que señala al siguiente nodo de la lista
    struct Nodo *siguiente;// Estructura anidada que apuntara hacia la siguiente posicion de la lista
} Nodo;// Este es el nombre de la estructura

// Creamos la primera y utlima posicion del nodo
Nodo *primera = NULL;
Nodo *ultimo = NULL;

void agregra(Nodo *nodo){// Funcion para agregarle datos a la lista
    // El dato que vamos a agregar que apunta a siguiente que por el momento apunta a vacio
    nodo -> siguiente = NULL;

    // Hay que verificar si la lista sesta vacia o no
    // asi nos damos cuenta si vamos a agregar el primer elemento o si tenemos que agregar despues de elementos que ya tenga la lista
    if (primera == NULL){// La lista esta vacia
        primera = nodo;// Asi le asignamos el valor que nos mandan
        // Si hay un solo elemento en la lista entonces el ultimo tambien apunta a este mismo dato
        ultimo = nodo;
    }else{// Si la lista no esta vacia
        // Lo que antes apuntaba ultimo ahora apunta a este nodo agregado
        ultimo -> siguiente = nodo;
        ultimo = nodo;
    }   
}

int main(){
    // Creamos los nodos para la lista
    // A estos les tenemos que asignar memoria dinamica
    // Ahora queremos espacio para todo el nodo No solo para el tipo de dato a guardar por eso se pone nodo en sizeof
    Nodo *primerNodo = malloc(sizeof(Nodo));

    // Hacemos que apunte al dato que queremos guardar
    primerNodo -> dato = 5;

    // Creamos otro nodo
    Nodo *segundoNodo = malloc(sizeof(Nodo));
    segundoNodo -> dato = 7;// Almacenamos otro dato

    // Agregamos los nodos a la lista
    agregra(primerNodo);
    agregra(segundoNodo);

    // Imprimimos los valores
    Nodo *i = primerNodo;// Queremos todos los datos desde el primer nodos
    
    while (i != NULL){
        printf("%i\n",i->dato);
        // Avanzamos al siguiente nodos
        i = i->siguiente;
    }
    
    return 0;
}