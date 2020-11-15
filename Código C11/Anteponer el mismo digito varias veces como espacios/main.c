/*
Combinar el indicador de bandera + (más) y el indicador de bandera 0 (cero) 
para imprimir 452 en un campo de nueve espacios con un signo + y ceros a la izquierda, 

A continuación, se imprime 452 nuevamente usando solo el indicador 0 y un campo de nueve espacios.
*/

#include <stdio.h>

int main(void) {

	printf("%+09d\n", 452);  //se imprime +00000452
	printf("%09d\n", 452);  //se imprime  000000452
}