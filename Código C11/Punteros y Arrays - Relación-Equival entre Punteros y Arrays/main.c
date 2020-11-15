#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int array[5] = { 0, 1, 2, 3, 4 };  //Declaramos un array de 5 elementos
    int* arrayPtr;  //Declaramos un puntero de tipo entero

    //Las siguientes dos intrucciones son equivalentes
    arrayPtr = array;  //es lo mismo que   arrayPtr = &array;

    //Imprimir dirección de memoria del array
    printf("%p\n", arrayPtr);

    arrayPtr = &array;  //es lo mismo que   arrayPtr = array;

    //Imprimir dirección de memoria del array
    printf("%p\n", arrayPtr);

    puts("\n");

    //Imprimir valor del primer elemento del array
    printf("Valor del primer elemento del array: %u\n", *arrayPtr);

    return 0;
}
