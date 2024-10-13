/*
    Arreglos Unidencionales:

    Datos secuenciales del mismo tipo de datos en formato filas y columnas
    comenzando en el indice 0 hasta N

    Acceder:
        NombreArreglo[Pos] = Dato

    Implementacion:
        TipoDato Nombre [NumeroElementos];

    Cuando se definen de una vez, entre los corchetes se puede omitir la cantidad de elementos
        TipoDato Nombre[NumeroElementos] = {Valor1, Valor2, ..., ValorN};
    
*/
#include<stdio.h>
#include<conio.h>// Uso de la funcion getch();

int main(){
    // Definicion de arreglos
    int a[5]={1,2,3,4,5};

    // Imprimir un elemento
    printf("%i ",a[1]);

    // Imprimir el arreglo
    for (int i = 0; i < 5; i++){
        printf("%i\n", a[i]);
    }
    
    float b[5];
    printf("Ingrese los datos del arreglo: \n");
    for (int i = 0; i < 5; i++){
        printf("%i. -> ", i+1);
        scanf("%f", &b[i]);
    }
    printf("\nValores del arreglo\n");
    for (int i = 0; i < 5; i++){
        printf("[%.2f]", b[i]);
    }

    char c[5]={'a','e','i','o','u'};
    for (int i = 0; i < 5; i++){
        printf("\n[%c]", c[i]);
    }

    // Arreglo de Palabras
    char d[]="JOSEMAES";
    printf("%s",d);

    char e[20];
    printf("Ingrese su nombre: ");
    gets_s(e,20);

    printf("Buenos Dias %s", e);


    getch();// Para que el .exe no se cierre
    return 0;
}