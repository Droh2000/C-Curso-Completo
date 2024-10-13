/*
    Liberacion de Memoria con Free()

    Supongamos que declaramos un puntero y ese se guarda en la memoria estatica
    pero con "malloc()" va a tratar de señalar hacia algun lugar de la memoria dinamica
    reservando espacio gracias a la funcion pero si toda esta memoria dinamica esta llena
    entonces no se puede almacenarnos espacios y el puntero apuntaria a NULL

    Ahora hacemos todos los pasos y el puntero con malloc() apunta a un espacio de la memoria
    , hacemos todas las operaciones y cuando terminamos queremos liberar ese espacio en memoria
    para que ya no este ocupado ese espacio por esa variable
        En la memoria estatica, todo lo que declaremos de forma normal sin puntero, nos estara
        ocupando espacio en memoria mientras el programa este en ejecucion, una vez terminado
        se eliminan todo

        Pero nada nos garantiza que en la memoria dinamica suceda lo mismo, asi que para eso usamos
        la funcion "free()"

    Liberar espacio a lo que apunta el puntero
        free(Puntero); -> Con esto nos elimina el dato y nos deja la posicion vacia en la memoria
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int* p1;

    p1 = malloc(sizeof(int));

    if(p1 == NULL){
        printf("No se pudo asignar la memoria dinamica");
    }else{
        printf("Hay espacio\n");
        // Asignamos valor al puntero
        *p1 = 15;
        printf("%i",*p1);
    }

    free(p1);// Liberar espacio a donde apunta P1

    // Verificamos que se haya liberado correctamente
    printf("\n%i",*p1);// Nos saldra un numero extraño que significa que no se esta encontrando nada en esa poscion de memoria
    return 0;
}