#include <stdio.h>
#include <stdlib.h>

#define TAMANO 5

int main()
{
    //Definimos array de 5 elementos
    unsigned int valores[TAMANO] = { 2, 4, 6, 8, 10 };

    //Definimos puntero 'vPtr' que apunta a un objeto tipo unsigned int
    unsigned int* vPtr;

    puts("Imprimir elementos del array 'vPtr' utilizando notacion indizacion\n:");

    //Imprimir elementos del array 'vPtr' utilizando notación indización
    for (size_t i = 0; i < TAMANO; ++i) {
        printf("valores[%u] = %u\n", i, valores[i]);
    }

    puts("\nDos sentencias que asignan la dirección inicial de los valores del array a la variable puntero 'vPtr':\n");

    //Sentencias que asignan la dirección inicial de los valores del array a la variable puntero 'vPtr'.
    vPtr = valores;
    printf("%u\n", *vPtr);
    vPtr = valores;
    printf("%u\n", *vPtr);

    puts("\nImprimir elementos del array 'vPtr' utilizando notacion desplazamiento:\n");

    //Imprimir elementos del array 'vPtr' utilizando notación desplazamiento
    for (size_t offset = 0; offset < TAMANO; ++offset) {
        printf("vPtr[%u] = %u\n", offset, *(vPtr + offset));
    }

    puts("\nImprimir elementos del array 'vPtr' utilizando notacion desplazamiento con el nombre del array como puntero:\n");

    //Imprimir elementos del array 'vPtr' utilizando notación desplazamiento con el nombre del array como puntero
    for (size_t offset = 0; offset < TAMANO; ++offset) {
        printf("valores[%u] = %u\n", offset, *(valores + offset));
    }

    //Imprimir elementos del array 'valores' indexando el puntero 'vPtr' al array
    puts("\nImprimir elementos del array 'valores' indexando el puntero 'vPtr' al array:\n");
    vPtr = valores;

    for (int i = 0; i < TAMANO; i++) {
        printf("*(vPtr + %d) : %u\n", i, *(vPtr + i));
    }

    //Consultar valor elemento 5 del array
    puts("Consultar valor elemento 5 del array\n");

    printf("valores[4] = %u\n", valores[4]);
    printf("*(valores + 4) = %u\n", *(valores + 4));
    printf("vPtr[4] = %u\n", vPtr[4]);
    printf("*(vPtr + 4) = %u\n", *(vPtr + 4));

    //'vPtr' apunta a valores, a qué dirección hacen referencia vPtr + 4 y vPtr - 4 cuando vPtr apunta a vPtr[4]
    puts("\n'vPtr' apunt a valores[4], a que direccion y valor hacen referencia vPtr + 4 y vPtr - 4\n");

    printf("Direccion vPtr = %p\n", vPtr);
    printf("Valor vPtr = %u\n", *vPtr);

    printf("Direccion vPtr + 4 = %p\n", &vPtr + 4);
    printf("Valor vPtr + 4 = %u\n", *(vPtr + 4));

    vPtr = vPtr + 4;

    printf("Direccion vPtr - 4 = %p\n", &vPtr - 4);
    printf("Valor vPtr - 4 = %u\n", *(vPtr - 4));

    return 0;
}
