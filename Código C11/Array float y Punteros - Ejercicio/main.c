#include <stdio.h>
#include <stdlib.h>

#define TAMANO 10

int main()
{
    float numeros[TAMANO] = { 0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };  //Definir e incializar array 'numeros'

    float* nPtr = &numeros;  //puntero 'nPtr' de tipo flotante que apunta a objeto de tipo flotante

    puts("Imprimir elementos del array numeros utilizando notacion indexacion puntero:\n");

    //imprimir elementos del array 'numeros' utilizando notación indexación puntero
    for (size_t elementos = 0; elementos < TAMANO; ++elementos) {
        printf("numeros[%u] = %.1f\n", elementos, numeros[elementos]);
    }

    puts("\nImprimir elementos del array numeros utilizando notacion puntero desplazamiento:\n");

    //imprimir elementos del array 'numeros' utilizando notación puntero desplazamiento
    for (size_t offset = 0; offset < TAMANO; ++offset) {
        printf("nPtr[%u] = %.1f\n", offset, *(nPtr + offset));
    }

    puts("\nImprimir elementos del array numeros utilizando el nombre del array como puntero:\n");

    //imprimir elementos del array 'numeros' utilizando el nombre del array como puntero
    for (size_t offset = 0; offset < TAMANO; ++offset) {
        printf("numeros[%u] = %.1f\n", offset, *(numeros + offset));
    }

    //Hacer referencia al cuarto elemento del array utilizando las notaciones array puntero y array indexación
    nPtr[4];
    numeros[4];
    *(nPtr + 4);

    //Dirección de memoria de nPtr + 8. Valor almacenado en esta ubicación
    puts("\nImprimir direccion de memoria y valor de la ubicacion nPtr + 8:");

    printf("\n%p = %.1f\n", &nPtr[8], *(nPtr + 8));

    return 0;
}
