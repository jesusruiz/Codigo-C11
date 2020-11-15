/*
Diseñar el algoritmo correspondiente a un programa, que:

    Crea una tabla bidimensional de longitud 5x15 y nombre ‘marco’.

    Carga la tabla con dos únicos valores 0 y 1, donde el valor uno ocupará las posiciones o elementos que delimitan la tabla, es decir, las más externas, mientras que el resto de los elementos contendrán el valor 0.

      111111111111111
      100000000000001
      100000000000001
      100000000000001
      111111111111111

    Visualiza el contenido de la matriz en pantalla.
*/

#include <stdio.h>
#define FILAS 5
#define COLUMNAS 15

int main(void) {

    int marco[FILAS][COLUMNAS];

    for (int filas = 0; filas < FILAS; filas++) {
        for (int columnas = 0; columnas < COLUMNAS; columnas++) {
            if (filas != 0 && filas != 4 && columnas != 0 && columnas != 14) {
                marco[filas][columnas] = 0;
            }
            else {
                marco[filas][columnas] = 1;
            }
        }
    }

    for (int filas = 0; filas < FILAS; filas++) {
        for (int columnas = 0; columnas < COLUMNAS; columnas++) {
            if (filas != 0 && columnas % 15 == 0) {
                puts("");
            }
            printf("%d", marco[filas][columnas]);
        }
    }

    puts("");
}