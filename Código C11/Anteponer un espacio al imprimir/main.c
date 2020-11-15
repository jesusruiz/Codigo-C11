/*
Anteponer un espacio al imprimir

Anteponer un espacio a un número positivo con el indicador de bandera de espacio. 
Esto es útil para alinear números positivos y negativos con el mismo número de dígitos. 
El valor -547 no está precedido por un espacio en la impresión por pantalla debido a su signo menos.
*/

#include <stdio.h>

int main(void) {

	printf("% d\n% d\n", 547, -547);  //se añade un espacio antes de imprimir el número 547
									  //ese espacio no es añadido cuando se imprimer el número -547, debido a su
									  //signo negativo
}