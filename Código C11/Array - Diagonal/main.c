/* 
Diseñar el algoritmo correspondiente a un programa, que:

    Crea una tabla bidimensional de longitud 5x5 y nombre ‘diagonal’.
    Carga la tabla de forma que los componentes pertenecientes a la diagonal de la matriz tomen el valor 1 
    y el resto el valor 0.
    Muestra el contenido de la tabla en pantalla.

*/

#include <stdio.h>
#define TAMANO 5

int main(void) {

    int matriz[TAMANO][TAMANO];

    for (int filas = 0; filas < TAMANO; filas++) {
        for (int columnas = 0; columnas < TAMANO; columnas++) {
            if (filas == columnas) {
                matriz[filas][columnas] = 1;
            }
            else {
                matriz[filas][columnas] = 0;
            }
        }
    }

    for (int filas = 0; filas < TAMANO; filas++) {
        for (int columnas = 0; columnas < TAMANO; columnas++) {
            if (filas != 0 && columnas % 5 == 0) {
                puts("");
            }
            printf("%d", matriz[filas][columnas]);
        }
    }

    puts("");
 }

