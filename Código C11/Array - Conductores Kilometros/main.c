/*
De una empresa de transporte se quiere guardar el nombre de los conductores que tiene, 
y los kilómetros que conducen cada día de la semana.

Para guardar esta información se van a utilizar dos arreglos:

    Nombre: Vector para guardar los nombres de los conductores.
    kms: Tabla para guardar los kilómetros que realizan cada día de la semana.

Se quiere generar un nuevo vector (“total_kms”) con los kilómetros totales que realza cada conductor.

Al finalizar se muestra la lista con los nombres de conductores y los kilómetros que ha realizado.
*/

#include <stdio.h>

int main(void) {

    //Array 4 elementos = 4 nombres de conductores de hasta 10 caracteres
    char conductores[4][10];

    //Array 5 elementos kilomtraje = 5 dias de la semana (lunes a viernes)
    float kms[5] = { 0 };

    //Array total_kms donde se suman el total de kilomtrajes de cada conductor
    float total_kms[5] = { 0 };

    //Variable para almacenar el numero de conductor
    unsigned int num_conductor;

    //Variable para almacenar el kilometraje
    float kilometraje;

    for (int elemento = 0; elemento < 4; elemento++) {
        printf("Introduzca el nombre del conductor numero %u: ", elemento);
        gets(conductores[elemento]);
    }

    //Recorrer los dos arrays principales
    for (int elemento = 0; elemento < 4; elemento++) {
        printf("%s ", conductores[elemento]);
    }

    puts("\n");

    for (int elemento = 0; elemento < 5; elemento++) {
        printf("%s", "A continuacion, introduzca el numero de conductor y el kilometraje que realizo: ");
        scanf_s("%u %f", &num_conductor, &kilometraje);

        kms[elemento] = kilometraje;

        if (num_conductor == 0) {
            total_kms[0] = total_kms[0] + kilometraje;
        }

        if (num_conductor == 1) {
            total_kms[1] = total_kms[1] + kilometraje;
        }

        if (num_conductor == 2) {
            total_kms[2] = total_kms[2] + kilometraje;
        }

        if (num_conductor == 3) {
            total_kms[3] = total_kms[3] + kilometraje;
        }
    }

    printf("%s", "Kilometros introducidos:");

    puts("\n");

    //Imprimir los kilometros introducidos
    for (int elemento = 0; elemento < 5; elemento++) {
        printf("%.2f ", kms[elemento]);
    }

    puts("\n");

    printf("%s", "Total de kilometros recorridos por cada conductor:");

    puts("\n");

    //Imprimir total kilometros recorridos por cada conductor
    for (int elemento = 0; elemento < 5; elemento++) {
        printf("%.2f ", total_kms[elemento]);
    }

    puts("\n");
}