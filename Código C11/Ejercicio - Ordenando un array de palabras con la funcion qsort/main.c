/*
(Alfabetizaci�n de una lista de cadenas)
Utilice las funciones de comparaci�n de cadenas y las t�cnicas para ordenar matrices
para escribir un programa que alfabetice una lista de cadenas.
*/

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

//Definici�n de la funci�n comparadora
static int miComparacion(const void* a, const void* b)
{
    //establecer las reglas para la comparaci�n
    return strcmp(*(const char**)a, *(const char**)b);
}

//Funci�n para ordenar el array
void ordenar(const char* arr[], int n)
{
    //llamar a la funci�n qsort() para ordenar el array
    //con la ayuda del comparador
    qsort(arr, n, sizeof(const char*), miComparacion);
}

//Funci�n principal
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

    //Ordenar el array alfab�ticamente
    ordenar(arr, n);

    //Imprimir los nombres una vez ordenados
    printf("\nLos elementos del array ordenados alfab�ticamente son:\n");
    for (i = 0; i < n; i++)
        printf("%d: %s \n", i, arr[i]);

    return 0;
}