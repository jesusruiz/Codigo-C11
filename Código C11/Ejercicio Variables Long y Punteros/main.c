#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Definimos dos variables tipo long int
    long int valor1 = 200000;
    long int valor2;

    //Definimos el puntero 'lPtr' de tipo long int
    long int* lPtr;

    //Asignamos el valor de la variable 'valor1' al puntero 'lPtr'
    lPtr = &valor1;

    //Imprimir valor del objeto al que apunta el puntero 'lPtr'
    printf("Valor del puntero 'lPtr' = %ld\n", *lPtr);

    //Asignar el valor del objeto al que apunta el puntero 'lPtr' a la variable 'valor2'
    valor2 = *lPtr;

    //Imprimir el valor de la variable 'valor2'
    printf("Valor de la variable 'valor2' = %ld\n", valor2);

    //Imprimir la dirección de la variable 'valor1'
    printf("Valor de la direccion de la variable 'valor1' = %p\n", &valor1);

    //Imprimir la dirección almacenada en el puntero 'lPtr'
    printf("Valor de la direccion almacenada en el puntero 'lPtr' = %p\n", lPtr);

    return 0;
}
