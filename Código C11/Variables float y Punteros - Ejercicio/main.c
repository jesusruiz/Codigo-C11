#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaramos dos variables de tipo flotante
    float numero1 = 7.3;
    float numero2;

    float* fPtr; //Definimos la variable puntero 'fPtr' para que pueda apuntar a un objeto tipo float

    fPtr = &numero1;  //Asignamos la dirección de memoria de la variable numero1 al puntero fPtr. Ahora el puntero apunta a numero1

    printf("El valor al que apunta el puntero 'fPtr' es %.1f\n", *fPtr);  //Se imprime 7.3

    numero2 = *fPtr;  //Asignamos el valor al que apunta el puntero 'fPtr' a la variable 'numero2'

    printf("El valor de la variable 'numero2' es: %.1f\n", numero2);

    printf("La direccion de memoria de la variable 'numero1 es %p\n", &numero1);

    printf("La direccion de memoria a la que apunta la variable puntero 'fPtr' es %p\n", fPtr);

    printf("La direccion de memoria de la variable puntero 'fPtr' es %p\n", &fPtr);

    return 0;
}
