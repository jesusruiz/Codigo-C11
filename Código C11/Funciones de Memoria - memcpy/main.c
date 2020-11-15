/*
Funciones de Memoria - Función memcpy()

La función memcpy() copia un número específico de bytes del objeto (bloque de datos) apuntado por su segundo argumento 
en el objeto (bloque de datos) apuntado por su primer argumento. 

La función puede recibir un puntero a cualquier tipo de objeto (bloque de dato). 

El resultado de esta función no está definido si los dos objetos (bloques de datos) se superponen en la memoria
(es decir, si son partes del mismo objeto (bloque de dato)); en tales casos, se utiliza la función memmove().
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	char cadena1[18];  //crea el array de caracteres 's1'
	char cadena2[] = "Copia esta cadena";  //inicializa el array de caracteres 's2'

	memcpy(cadena1, cadena2, 18);

	printf("%s\n%s\"%s\"\n",
		"Despues de que la cadena2 sea copiada en la cadena1 con la funcion memcpy(),",
		"la cadena1 contiene ", cadena1);
}