/*
        Asignacion Dinamica de Memoria

    Memoria: Es un espacio logico para guardar informacion, son dispositivos
    que retienen DATOS informaticos durante algun intervalo de tiempo

    Memoria Estatica: Es el espacio en memoria que se crea al declarar variables de cualquier tipo de dato
    (Primitivas [Int,Char,...] o derivados [Struct, Matrices, Punteros],...). La memoria que estas variables 
    ocupan no puede cambiarse durante la ejecucion y tampoco puede ser liberada manualmente

        Ejemplo:
            // Si declaramos la variable 'a' y no le asignamos nada, de todas formas se estan reservando 4 bytes de memoria
            int a; -> Aqui en el tiempor ejecucion la maquina ya reservo un espacio de memoira de 4 bytes
            a = 10; -> Aqui estamos usando esa memoria reservada, almacenando el valor de 10

            // Cuando Declaramos Arreglos
            int a[20];

            a[0]=1;,...,a[4]=5;-> Como solo estamos utilizando 5 posiciones del arreglo entontences con las otras 15 nos las utilizamos
                                  sin embargo se esta reservando memoria para cada una de las posiciones del arreglo
                                  Aqui estamos desperdiciando memoria

            En estas variables no podemos modificar su tamaño porque siempre van a almacenar lo mismo
    
    Memoria Dinamica: Es memoria que se reserva en tiempo de ejecucion, su principal ventaja frente a la estatica,
    es que su tamaño puede variar durante la ejecucion del programa, El uso de memoria dinamica es necesario cuando
    a priori no conocemos el numero de datos o elementos a tratar.
    (Aqui ahorramos memoria porque solo se va a reservar la memoria que vamos a utilizar)

        Funcion Malloc()

            La funcion malloc sirve para solicitar un bloque de memoria del tamaño suministrado como parametro y
            devuelve un puntero a la zona de memoria concedida

            Definicion:
                tipo* puntero;
                puntero = malloc(tamaño en bytes); // Asi comprueba el tamaño en bytes para guardar determinados datos
            
            El tamaño se especifica en bytes, asi se garantiza que la zona de memoria concedida no esta ocupada
            por ninguna  otra variable, ni otra zona devuelta por malloc, si malloc es incapaz de conceder el bloque
            (Por ejemplo que no hay memoira suficiente), entonces nos regresa un puntero NULL

            Ejemplo de Uso: ("sizeof" -> Es la cantidad en bytes que vamos a utilizar para la variable)
                int *p1;
                p1 = malloc(sizeof(int));

                char *c1;
                c1 = malloc(sizeof(char));
*/