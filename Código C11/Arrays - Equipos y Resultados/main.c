/*
Crear un programa de ordenador para gestionar los resultados de la quiniela de fútbol. 
Para ello vamos a utilizar dos tablas:

    Equipos: Que es una tabla de cadenas donde guardamos en cada columna el nombre de los equipos de cada partido. 
    En la quiniela se indican 15 partidos.
    Resultados: Es una tabla de enteros donde se indica el resultado. 
    También tiene dos columnas, en la primera se guarda el número de goles del equipo que está guardado 
    en la primera columna de la tabla anterior, y en la segunda los goles del otro equipo.

El programa ira pidiendo los nombres de los equipos de cada partido y el resultado del partido, 
a continuación se imprimirá la quiniela de esa jornada.

¿Qué modificación habría que hacer en las tablas para guardar todos los resultados de todas las jornadas de la temporada?
 */

#include <stdio.h>

int main(void) {

    char equipos[20][40];
    int resultados[20];
    int partidos = 1; //Variable que suma el numero de partidos introducidos

    for (int contador = 0; contador < 8; contador = contador + 2) {
        printf("Introduza el nombre del equipo local del partido numero %d: ", partidos);
        gets(equipos[contador]);
        printf("Introduza el nombre del equipo visitante del partido numero %d: ", partidos);
        gets(equipos[contador + 1]);
        partidos++;
    }

    printf("\n%s\n", "Los partidos de la jornada son:");

    partidos = 0;

    for (int contador = 0; contador < 4; contador++) {
        printf("%s - %s\n", equipos[partidos], equipos[partidos + 1]);
        partidos = partidos + 2;
    }

    puts("");

    partidos = 0;

    printf("%s\n", "Introduzca el resultado producido en el encuentro ");

    for (int contador = 0; contador < 4; contador++) {
        printf("%s - %s ", equipos[partidos], equipos[partidos + 1]);
        scanf_s("%d %d", &resultados[partidos], &resultados[partidos + 1]);
        partidos = partidos + 2;
    }

    puts("");

    partidos = 0;

    printf("\n%s\n", "Los resultados de la jornada han sido:");

    for (int contador = 0; contador < 4; contador++) {
        printf("%12s - %4s %4d  %d\n", equipos[partidos], equipos[partidos + 1], 
        resultados[partidos], resultados[partidos + 1]);
        partidos = partidos + 2;
    }

    puts("");
}