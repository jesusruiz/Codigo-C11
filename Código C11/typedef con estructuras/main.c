/*
typedef con estructuras

A menudo, typedef se utiliza para crear sinónimos para los tipos de datos básicos. 
Por ejemplo, un programa que requiera enteros de cuatro bytes puede usar el tipo int en un sistema y el tipo long en otro.
Los programas diseñados para la portabilidad a menudo usan typedef para crear un alias para cuatro bytes.
enteros, tales como Integer. 
El alias Integer se puede cambiar una vez en el programa para que el programa funcione en ambos sistemas.
*/

typedef struct {  //Definición de una estructura
	char *cara;  //puntero de tipo char
	char *palo;  //puntero de tipo char
} Carta;  //Definición de un tipo de dato 'Carta' de tipo estructura

#include <stdio.h>

int main(void) {

	Carta baraja[52];  //Definición de un array de 52 elementos estructura de tipo de dato 'Carta'
					   //podremos almacenar por tanto 52 elementos 'Carta' con sus respectivos miembros 'cara' y 'palo'

	baraja[0].cara = "As";
	baraja[0].palo = "Bastos";

	printf("La primera carta del array \'baraja\' de tipo \'Carta\' es un %s de %s\n", baraja[0].cara, baraja[0].palo);
}