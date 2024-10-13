/*

    Lista Enlazada:

        Es una coleccion o secuencia de elementos dispuestos uno detras de otro
        en la que cada elemento se conecta al siguiente elemento por un Enlace o Puntero
        (Esta seria una estructura de datos dinamica en comparcion con el arreglo que 
        podriamos considerarlo estatico porque tenemos que decir cuantos elementos vamos 
        a usar), aqui no le tenemos que decir la cantidad de elementos ya que con el 
        programa se va modificando

        Parte de un Nodo:
                Dato1|P -> Dato2|P -> ... -> DatoN|p

                    Dato -> Seria la informacion que almacenamos
                    P -> Es el puntero que punta al siguiente nodo

                    El utlimo dato con el puntero, este no apunta a nada que seria NULL
                    es decir el final de la lista enlazada

        Clasificacion de las listas enlazadas:
            Se pueden dividir en 4 categorias:
                1. Listas simplemente enlazadas
                    Aqui cada nodo o elemento contiene un unico enlace que conecta ese nodo al nodo siguiente
                    o nodo sucesor, la lista es eficiente en recorridos directos (Hacia adelante):
                        Dato1|p -> Dato2|p -> Dato3|p -> Dato4|p (Solo tenemos un apuntador que apunta hacia el siguiente)
                2. Listas Doblemente enlazadas
                    Cada Nodo contiene dos enclazes, uno a su nodo predesesor y el otro a su nodo sucesor, la lista es eficiente
                    tanto en recorrido directo (Hacia adelente) como en recorrido inverso (Hacia atras)
                    (Aqui tenemos dos punteros y nos podemos mover en ambas direccion en la lista)
                3. Listas circular simplemente enlazadas
                    Una lista enlazada simplemente en la que el ultimo elemento (Cola) se enlaza al primer elemento
                    (Cabeza de la lista) de tal modo que la lista puede ser recorrido de modo circular (En anillo)
                    Aqui el ultimo nodo apunta directamente hacia el primer nodo de la lista pudiendo recorrer la lista otra vez
                4. Lista circular doblemente enlazada
                    Una lista doblemente enlazada en la que el ultimo elemento se enlaza al primer elemento y viceversa, esta
                    lista se puede recorrer de modo circular (En anilla) tanto en direccion directa hacia adelante como 
                    en la direccion inversa regresandonos hacia atras

        Operaciones en las listas Enlazadas
            Declaracion de los tipos nodos y puntero a nodo (Poner el dato y el puntro a lo qeu apunta)
            Inicializacion o creacion
            Insertar elementos
            Eliminanr elemento
            Buscar elementos (Comprobando la existencia de los datos en una lista)
            Recorrer una lista enlazada (Visitar cada nodo de la lista)
            Comprobar si la lista esta vacia
*/