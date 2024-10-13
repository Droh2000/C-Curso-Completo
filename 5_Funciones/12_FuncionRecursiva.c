/*
    Recursividad: Una funcion que se llama a si misa
        1. Caso Base -> Es de lo que parte la funcion
        2. Caso Recursivo -> Volver a llamar a la funcion con su respectivo parametro pero aplicandole una disminucio u otra cosa
    Ejemplo:
        a(x){
            // Caso base
            if(n == 1){
                return n;// Accion a realizar
            }else{
                // Caso Recursivo
                a(x-1);
            }
        }
*/
#include<stdio.h>

long factorial(int);

int main(){
    // Factorial de Un numero
    int num;
    printf("Ingrese un numero: ");
    scanf("%i", &num);

    printf("El factorial de %i es: %li",num,factorial(num));

    return 0;
}

// 4! = 4*3*2*1
// 4! = 4*3!
// 3! = 3*2*1 = 3*2!
// 2! = 2*1 = 2*1!
// 1! = 1         -> Este es el Caso Base
long factorial(int n){// 4
    if(n <= 1){// 4<=1(NO), 3<=1(NO), 2<=1(NO), 1<=1(SI) -> 1 (De aqui se regresa con las llamadas a la funcion y aplica la operacion)
        return 1;
    }else{
        return (n*factorial(n-1));// 4*(4-1=3!), 3*(3-1=2!), 2*(2-1=1!)
    }
    // Pasa por todo el caso factorial hasta que llega al caso base, una vez ahi vuelve a subir a todos los casos factores que paso hasta dar el resultado final
}