/*
Búsqueda de subcadenas con strstr() y un puntero 

Escriba un programa que pide al usuario introducir una línea de texto y una cadena de búsqueda desde el teclado. 

Con la función strstr(), ubique la primera aparición de la cadena de búsqueda en la línea de texto y
asigne la ubicación a la variable busquedaPtr de tipo char *. 

Si se encuentra la cadena de búsqueda, imprima el resto de la línea de texto comenzando desde la cadena de búsqueda. 

Luego, utilice la función strstr() nuevamente, para ubicar la próxima aparición de la cadena de búsqueda 
en la línea de texto. 

Si se encuentra una segunda aparición, imprima el resto de la línea de texto que comienza con la segunda aparición. 

[Sugerencia: la segunda llamada a strstr() debe contener searchPtr + 1 como primer argumento].
*/

#include <stdio.h>
#include <string.h>
#define MAX_TAMANO 100

int main(void) {

	char cadena[MAX_TAMANO];  //array de tipo cadena para almacenar la cadena en la que buscar
	char busqueda[30];  //array de tipo cadena para almacenar la cadena a buscar
	char* busquedaPtr;  //puntero a cadena

	printf("%s\n", "Introduzca una cadena: ");
	gets(cadena);

	printf("%s\n", "Introduzca una subcadena a buscar en la primera cadena: ");
	gets(busqueda);

	//Buscar la cadena 'busqueda' en la cadena 'cadena' y almacenar el resultado en 'busquedaPtr'
	if (busquedaPtr = strstr(cadena, busqueda)) {

		printf("Primera ocurrencia encontrada: %s\n", busquedaPtr);
	}
	else {
		printf("%s", "No se encontraron ocurrencias\n");
		exit(0);  //si no se encuentra ninguna ocurrencia, salimos directamente del programa y no seguimos comprobando
	}

	//Buscar una segunda ocurrencia de la cadena 'busqueda' en la cadena 'busquedaPtr'
	//Ya no buscado en la cadena original 'cadena', ya que si lo hiciesemos así, otra vez empezaríamos a buscar
	//desde el principio de la cadena
	//En este caso, como tenemos un puntero que apunta al caracter donde se encontró la primera ocurrencia,
	//pues empezamos a buscar a partir desde el caracter siguiente a esa posición (busquedaPtr + 1)
	if (busquedaPtr = strstr(busquedaPtr + 1, busqueda)) {

		printf("Segunda ocurrencia encontrada: %s\n", busquedaPtr);
	}
	else
	{
		printf("%s", "No se encontraron mas ocurrencias\n");
	}
}