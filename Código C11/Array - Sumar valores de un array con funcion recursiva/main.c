#include <stdio.h>
#include <stdlib.h>
#define TAMANO 10

//Función prototipo
int queHaceEstaFuncion(const int b[], size_t p);  //Recibe un array y una variable del tamaño del rray

//Función que inicia la ejecución del programa
int main()
{
    int x;  //almacena el valor de retorno de la función queHaceEstaFuncion

    //inicializar array a
    int a[TAMANO] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    x = queHaceEstaFuncion(a, TAMANO);  //Almacenamos en x el valor retornado por la función

    printf("El resultado es %d\n", x);  //imprimimos el resultado almacenado en x

    return 0;
}

//Función queHaceEstaFunción
int queHaceEstaFuncion(const int b[], size_t p) {

    //caso base   //si p (tamaño del array) vale 1 se devuelve 1
    if (1 == p) {
        return b[0];  //retorna 1
    }
    else {  //secuencia recursiva  (se va sumando cada uno de los valores de los elementos del array)
        return b[p - 1] + queHaceEstaFuncion(b, p - 1);
    }
}
