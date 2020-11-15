#include <stdio.h>
#include <stdlib.h>
#define TAMANO 10

//Funci�n prototipo
//Funci�n que recibe un array, una variable indiceInicio y otra variable con el tama�o del array
void arrayInverso(const int b[], size_t indiceInicio, size_t tamano);

//Funci�n que inicia el programa
int main(void)
{
    int a[TAMANO] = { 8, 3, 1, 2, 6, 0, 9, 7, 4, 5 };  //inicializar elementos array a

    puts("Los elementos del array impresos a la inversa son: ");
    //Llamada la funci�n arrayInverso pasandole como argumentos el array a, el indice de inicio 0 y el tama�o del array
    arrayInverso(a, 0, TAMANO);
    puts("");

    return 0;
}

//Funci�n unaFuncion
void arrayInverso(const int b[], size_t indiceInicio, size_t tamano) {
    if (indiceInicio < tamano) {
        arrayInverso(b, indiceInicio + 1, tamano);  //esta funci�n se llama a s� misma el numero de elementos del array
        printf("%d ", b[indiceInicio]);  //no imprime nada hasta que no se alcanza el numero de elementos del array
    }
}
