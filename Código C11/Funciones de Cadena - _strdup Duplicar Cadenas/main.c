/*
Funciones de Cadena - Funci�n _strdup()

La funci�n _strdup() llama a la funci�n malloc() para asignar espacio de almacenamiento para una copia de strSource y,
a continuaci�n, copia strSource en el espacio asignado.

Dado que _strdup() llama a malloc() para asignar espacio de almacenamiento para la copia de strSource, 
es recomendable liberar esta memoria llamando a la rutina Free del puntero devuelto por la llamada a _strdup().
*/

#include <string.h>
#include <stdio.h>

int main(void)
{
	char buffer[] = "Este es el texto del buffer";
	char* nuevaCadena;
	printf("Original: %s\n", buffer);
	nuevaCadena = _strdup(buffer);
	printf("Copia:     %s\n", nuevaCadena);
	free(nuevaCadena);
}