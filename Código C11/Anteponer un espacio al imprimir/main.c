/*
Anteponer un espacio al imprimir

Anteponer un espacio a un n�mero positivo con el indicador de bandera de espacio. 
Esto es �til para alinear n�meros positivos y negativos con el mismo n�mero de d�gitos. 
El valor -547 no est� precedido por un espacio en la impresi�n por pantalla debido a su signo menos.
*/

#include <stdio.h>

int main(void) {

	printf("% d\n% d\n", 547, -547);  //se a�ade un espacio antes de imprimir el n�mero 547
									  //ese espacio no es a�adido cuando se imprimer el n�mero -547, debido a su
									  //signo negativo
}