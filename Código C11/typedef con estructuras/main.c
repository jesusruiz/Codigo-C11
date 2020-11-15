/*
typedef con estructuras

A menudo, typedef se utiliza para crear sin�nimos para los tipos de datos b�sicos. 
Por ejemplo, un programa que requiera enteros de cuatro bytes puede usar el tipo int en un sistema y el tipo long en otro.
Los programas dise�ados para la portabilidad a menudo usan typedef para crear un alias para cuatro bytes.
enteros, tales como Integer. 
El alias Integer se puede cambiar una vez en el programa para que el programa funcione en ambos sistemas.
*/

typedef struct {  //Definici�n de una estructura
	char *cara;  //puntero de tipo char
	char *palo;  //puntero de tipo char
} Carta;  //Definici�n de un tipo de dato 'Carta' de tipo estructura

#include <stdio.h>

int main(void) {

	Carta baraja[52];  //Definici�n de un array de 52 elementos estructura de tipo de dato 'Carta'
					   //podremos almacenar por tanto 52 elementos 'Carta' con sus respectivos miembros 'cara' y 'palo'

	baraja[0].cara = "As";
	baraja[0].palo = "Bastos";

	printf("La primera carta del array \'baraja\' de tipo \'Carta\' es un %s de %s\n", baraja[0].cara, baraja[0].palo);
}