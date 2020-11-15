/*
(Alfabetización de una lista de cadenas)
Utilice las funciones de comparación de cadenas y las técnicas para ordenar matrices
para escribir un programa que alfabetice una lista de cadenas.
*/

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

//Definición de la función comparadora
static int miComparacion(const void* a, const void* b)
{
    //establecer las reglas para la comparación
    return strcmp(*(const char**)a, *(const char**)b);
}

//Función para ordenar el array
void ordenar(const char* arr[], int n)
{
    //llamar a la función qsort() para ordenar el array
    //con la ayuda del comparador
    qsort(arr, n, sizeof(const char*), miComparacion);
}

//Función principal
int main(void)
{

    //Array de nombres a ser ordenado 
    const char* arr[]
        = { "geeksforgeeks", "geeksquiz", "clanguage" };

    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    //Imprimir el array dado
    printf("Los elementos del array son:\n");
    for (i = 0; i < n; i++)
        printf("%d: %s \n", i, arr[i]);

    //Ordenar el array alfabéticamente
    ordenar(arr, n);

    //Imprimir los nombres una vez ordenados
    printf("\nLos elementos del array ordenados alfabéticamente son:\n");
    for (i = 0; i < n; i++)
        printf("%d: %s \n", i, arr[i]);

    return 0;
}