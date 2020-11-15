/*
Funciones de Memoria - Función memset()

La función memset(), copia el valor del byte en su segundo argumento 
en los primeros n bytes del objeto apuntado por su primer argumento, 
donde n es especificado por el tercer argumento
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	char cadena[50];  //declaración de un array de tipo cadena

	size_t maximoCopiar = sizeof cadena;

	//copio la cadena del segundo argumento en el array 'cadena'
	strcpy_s(cadena, maximoCopiar, "Esto es una funcion de biblioteca string.h");  
	puts(cadena);  //se imprime el contenido del array 'cadena' y se pega un salto de línea

	memset(cadena, '$', 7);  //se copia el caracter '$' en los primeros 7  bytes del array 'cadena'
	puts(cadena);  //se imprime el contenido del array 'cadena' y se pega un salto de línea

	return(0);
}