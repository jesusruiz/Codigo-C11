#include <stdio.h>
#include <stdlib.h>

int main() {
	char cadenaOrigen[50];
	//char cadenaDestino[20];

	printf("Introduzca una primera cadena menor de 50 caracteres:\n");

	//Se copia la cadena introducida en cadenaOrigen con un máximo de 49 caracteres (hay que incluir el caracter nulo)
	//El última parámetro hace referencia de donde se obtiene los datos. 
	//Al igual que otras funciones como fprintf, fgets se puede emplear para leer de la consola, 
	//indicándolo con stdin (standard input), o de un fichero.
	fgets(cadenaOrigen, 50, stdin);

	printf("%s", cadenaOrigen);

	return 0;
}