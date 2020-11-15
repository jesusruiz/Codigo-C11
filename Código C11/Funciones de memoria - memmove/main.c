/*
Funciones de Memoria - Función memmove()

La función memmove(), al igual que la función memcpy(),
copia un número específico de bytes del objeto (bloque de datos) apuntado por su segundo argumento
en el objeto (bloque de datos) apuntado por su primer argumento.

La copia se realiza como si los bytes se hubieran copiado del segundo argumento en un array temporal 
y luego se hubieran copiado de esa matriz temporal al primer argumento. 
Esto permite que los bytes de una parte de una cadena se copien en otra parte de la misma cadena, 
incluso si las dos partes se superponen.
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	char destino[] = "viejacadena";
	const char origen[] = "nuevacadena";

	printf("Antes de utilizar la funcion memmove() las cadenas destino = %s, origen = %s\n", destino, origen);
	memmove(destino, origen, 11);
	printf("Despues de utilizar la funcion memmove() las cadenas destino = %s, origen = %s\n", destino, origen);

	return(0);
}