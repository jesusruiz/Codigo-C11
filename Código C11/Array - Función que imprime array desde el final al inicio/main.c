#include <stdio.h>
#include <stdlib.h>
#define TAMANO 10

//Función prototipo
//Función que recibe un array, una variable indiceInicio y otra variable con el tamaño del array
void arrayInverso(const int b[], size_t indiceInicio, size_t tamano);

//Función que inicia el programa
int main(void)
{
    int a[TAMANO] = { 8, 3, 1, 2, 6, 0, 9, 7, 4, 5 };  //inicializar elementos array a

    puts("Los elementos del array impresos a la inversa son: ");
    //Llamada la función arrayInverso pasandole como argumentos el array a, el indice de inicio 0 y el tamaño del array
    arrayInverso(a, 0, TAMANO);
    puts("");

    return 0;
}

//Función unaFuncion
void arrayInverso(const int b[], size_t indiceInicio, size_t tamano) {
    if (indiceInicio < tamano) {
        arrayInverso(b, indiceInicio + 1, tamano);  //esta función se llama a sí misma el numero de elementos del array
        printf("%d ", b[indiceInicio]);  //no imprime nada hasta que no se alcanza el numero de elementos del array
    }
}
