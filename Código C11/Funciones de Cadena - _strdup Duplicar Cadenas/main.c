/*
Funciones de Cadena - Función _strdup()

La función _strdup() llama a la función malloc() para asignar espacio de almacenamiento para una copia de strSource y,
a continuación, copia strSource en el espacio asignado.

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