/*
    Direcciones en Memoria

    Cuando una variable se declara se asocian tres atributos fundamentales con la misma
    que son: nombre, tipo y direccion en memoria

        Ejemplo:
            int n = 40; Nombre: n, Tipo: Entera(int), Direccion en Memoria: 0x4fffd34
    
        Imprimir el Valor:
            printf("%i",n);
        Imprimir la posicion de memoria:
            printf("%p",&n); // p de Position
    
    Puntero (Apuntador)
        Es una variable que contiene la direccion de memoria de un dato o de otra
        variable, Quiere esto decir que el puntero apunta al espacio fisico donde esta
        el dato o la variable
    
        Ejemplo:
            int tasa = 100; -> Tenemos bloques que son espacios de memoria y supongamos que en la posicion 1004
                                esta guardando el valor de la variable
            int* p_tasa;    -> Creamos esta variable de tipo puntero y como no la hemos igualado a nada entonces 
                                solo almacena el espacio donde tendria que guardar el valor que tendria la variable 
                                 Supongamos que se decidio almacenar en el espacio de memoira 1001
            p_tasa = &tasa; -> Entonces en p_tasa se estaria guardando 1004 que es la posicion de memoira de la variable Tasa

            Esto es lo que hace un apuntador, solo almacena el valor de la posicion de la variable que le asignemos
        
        Declaracion:
            TipoDeDato *NombreDeApuntador
*/
#include<stdio.h>

int main(){
    // Posiciones de Memoria
    int num = 40;
    printf("%i", num);// Dato
    printf("\n");
    printf("%p", &num);//Direccion de memoria donde se almacena la variable

    // Apuntadores
    // Debe ser del mismo dato de la variable a referenciar por memoria
    int* pNum;
    pNum = &num;// Lo igualamos a la posicion de memoria donde se guarda la variable num
    printf("\nValor de la variable:\n");
    printf("\nDato: %i", num);
    // Con el * obtenemos todo lo que contiene la posicion de memoria que esta apuntando
    printf("\nDato Apuntador: %i", *pNum);

    printf("\nPosicion de Memoria:\n");
    printf("\nPosicion Dato: %p", &num);
    printf("\nPosicion Apuntador: %p", pNum);// Por lo que le almacenamos lo apuntamos haciando se almacena la variable Num

    return 0;
}